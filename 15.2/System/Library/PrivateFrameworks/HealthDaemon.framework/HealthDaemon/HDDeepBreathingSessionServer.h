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
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)taskIdentifier;
+ (Class)configurationClass;

- (void)connectionInvalidated;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)remote_startSessionWithStartDate:(id)a0 completion:(id /* block */)a1;
- (void)remote_startGuiding;
- (void)remote_endSessionWithEndReason:(long long)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)dealloc;

@end
