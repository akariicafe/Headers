@class NSString, XRVMState;

@interface DTVMTrackingService : DTXService <DTVMTrackingServiceAuthorizedAPI> {
    int _targetPid;
    unsigned int _targetTask;
    XRVMState *_currentState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (void)stopTracking;
- (void)startTracking;
- (id)configureLaunchEnvironment:(id)a0;
- (id)requestVMSnapshot;
- (void)setTargetPid:(id)a0 referenceDate:(id)a1;

@end
