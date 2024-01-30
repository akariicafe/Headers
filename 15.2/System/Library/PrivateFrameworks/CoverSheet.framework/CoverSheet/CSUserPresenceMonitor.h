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
- (void)_updateFaceDetectionState;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)isUserPresenceDetectionSupported;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)disableDetectionForReason:(id)a0;
- (id)initWithBiometricResource:(id)a0;
- (void).cxx_destruct;
- (void)enableDetectionForReason:(id)a0;
- (BOOL)_isFaceDetectPermitted;
- (void)conformsToCSEventHandling;
- (void)dealloc;
- (void)_setUserPresenceDetectedSinceWake:(BOOL)a0;

@end
