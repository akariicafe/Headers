@class NSString, BKSMousePointerService, PSPointerClientController, NSHashTable;
@protocol BSInvalidatable;

@interface SBMousePointerManager : NSObject <BKSMousePointerDeviceObserver> {
    PSPointerClientController *_pointerClientController;
    BKSMousePointerService *_mousePointerService;
    id<BSInvalidatable> _mousePointerDeviceObserverToken;
    unsigned long long _connectedPointingDevicesCount;
    id<BSInvalidatable> _serviceKeepAliveAssertion;
    NSHashTable *_observers;
}

@property (nonatomic) unsigned int systemCursorInteractionContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateKeepAliveAssertion;
- (void)_notifyObserversPointingDeviceBecameAvailable:(BOOL)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)isHardwarePointingDeviceAttached;
- (void).cxx_destruct;
- (id)init;
- (void)_handleAssistiveTouchEnabledDidChangeNotification;
- (void)mousePointerDevicesDidChange:(id)a0;
- (void)dealloc;
- (void)_setPointerUIDWithConnectedDeviceCount:(unsigned long long)a0;

@end
