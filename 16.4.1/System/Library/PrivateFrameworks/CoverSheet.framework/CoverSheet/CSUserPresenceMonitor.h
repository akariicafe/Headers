@class NSString, NSMutableSet, NSHashTable;
@protocol SBUIBiometricResource, BSInvalidatable;

@interface CSUserPresenceMonitor : NSObject <CSEventHandling> {
    id<SBUIBiometricResource> _biometricResource;
    NSMutableSet *_activationReasons;
    id<BSInvalidatable> _faceDetectAssertion;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL userPresenceDetectedSinceWake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)synthesizeUserPresenceForReason:(id)a0;

- (BOOL)_handleBiometricEvent:(unsigned long long)a0;
- (void)_setUserPresenceDetectedSinceWake:(BOOL)a0;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (id)initWithBiometricResource:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (BOOL)isUserPresenceDetectionSupported;
- (void)conformsToCSEventHandling;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (BOOL)_isFaceDetectPermitted;
- (void)_updateFaceDetectionState;
- (void).cxx_destruct;
- (void)_monitorForInjectedUserPresence;
- (void)enableDetectionForReason:(id)a0;
- (void)disableDetectionForReason:(id)a0;

@end
