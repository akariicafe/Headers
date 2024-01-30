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

- (BOOL)_handleBiometricEvent:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)initWithBiometricResource:(id)a0;
- (void)addObserver:(id)a0;
- (void)conformsToCSEventHandling;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (BOOL)_isFaceDetectPermitted;
- (void)enableDetectionForReason:(id)a0;
- (void)_setUserPresenceDetectedSinceWake:(BOOL)a0;
- (void)_updateFaceDetectionState;
- (BOOL)isUserPresenceDetectionSupported;
- (void)disableDetectionForReason:(id)a0;

@end
