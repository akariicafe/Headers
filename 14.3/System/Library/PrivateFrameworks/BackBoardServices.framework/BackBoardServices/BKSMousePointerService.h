@class BSServiceConnection, NSString, NSMutableDictionary, BSCompoundAssertion, NSSet, BKSMousePointerDevicePreferences, NSObject;
@protocol OS_dispatch_queue;

@interface BKSMousePointerService : NSObject <BKSMousePointerServiceServerToClientInterface> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceConnection *_connection;
    NSMutableDictionary *_displayUUIDToPerDisplayInfo;
    BSCompoundAssertion *_deviceConnectionObservers;
    BSCompoundAssertion *_preferencesObservers;
    NSSet *_attachedDevices;
    BOOL _isObservingDeviceConnection;
    BOOL _isObservingPreferences;
}

@property (copy) BKSMousePointerDevicePreferences *globalDevicePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)new;

- (id)pointerSuppressionAssertionOnDisplay:(id)a0 forReason:(id)a1 withOptionsMask:(unsigned long long)a2;
- (void)_locked_setMousePointerPreferencesObservationEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setPointerPosition:(struct CGPoint { double x0; double x1; })a0 onDisplay:(id)a1 withAnimationParameters:(id)a2;
- (id)requestGlobalMouseEventsForDisplay:(id)a0 targetContextID:(unsigned int)a1;
- (id)preferencesForDevice:(id)a0;
- (void)dealloc;
- (id)addPointerPreferencesObserver:(id)a0;
- (void)_locked_updateEventRoutesFromContext:(id)a0 forDisplayUUID:(id)a1;
- (void)_locked_reactivateConnection;
- (void)setContextRelativePointerPosition:(id)a0 onDisplay:(id)a1 withAnimationParameters:(id)a2 restrictingToPID:(int)a3;
- (id)_unlocked_serverTarget;
- (id)_locked_infoForDisplayUUID:(id)a0 createIfNeeded:(BOOL)a1;
- (void)setGlobalPointerPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setPreferences:(id)a0 forDevice:(id)a1;
- (oneway void)pointingDevicesDidChange:(id)a0;
- (id)_init;
- (void)_locked_updateServerWithPointerDeviceObservationState;
- (oneway void)pointerGlobalDevicePreferencesDidChange:(id)a0;
- (void)getHitTestContextsAtPoint:(id)a0 withAdditionalContexts:(id)a1 onDisplay:(id)a2 withCompletion:(id /* block */)a3;
- (void)_locked_updateServerWithPreferencesObservationState;
- (void)_locked_pointingDevicesDidChange:(id)a0;
- (void)_locked_setMousePointerDeviceObservationEnabled:(BOOL)a0;
- (id)addPointerDeviceObserver:(id)a0;
- (id)acquireButtonDownPointerRepositionAssertionForReason:(id)a0 contextRelativePointerPosition:(id)a1 onDisplay:(id)a2 restrictingToPID:(int)a3;
- (void)_locked_updateObserver:(id)a0 withPointingDevices:(id)a1;
- (id)_locked_serverTarget;
- (void)_activateServerConnection;
- (struct CGPoint { double x0; double x1; })globalPointerPosition;
- (void)setContextRelativePointerPosition:(id)a0 withInitialVelocity:(id)a1 onDisplay:(id)a2 withDecelerationRate:(double)a3 restrictingToPID:(int)a4;
- (void)_locked_sendCurrentAssertionParameters:(id)a0 forDisplayUUID:(id)a1;

@end
