@class _HKDeepBreathingSessionConfiguration, NSString, HDDaemonTransaction, NSObject;
@protocol OS_dispatch_queue;

@interface HDDeepBreathingSessionServer : HDStandardTaskServer <_HKDeepBreathingSessionServer> {
    NSObject<OS_dispatch_queue> *_queue;
    HDDaemonTransaction *_daemonTransaction;
    _HKDeepBreathingSessionConfiguration *_sessionConfiguration;
    long long _serverState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)dealloc;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)remote_endSessionWithEndReason:(long long)a0;
- (void)remote_startGuiding;
- (void)remote_startSessionWithStartDate:(id)a0 completion:(id /* block */)a1;

@end
