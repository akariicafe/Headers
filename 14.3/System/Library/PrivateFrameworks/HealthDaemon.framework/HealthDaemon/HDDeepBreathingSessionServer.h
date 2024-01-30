@class _HKDeepBreathingSessionConfiguration, NSString, HDDaemonTransaction, NSObject;
@protocol OS_dispatch_queue;

@interface HDDeepBreathingSessionServer : HDStandardTaskServer <_HKDeepBreathingSessionServer>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDDaemonTransaction *daemonTransaction;
@property (readonly, copy, nonatomic) _HKDeepBreathingSessionConfiguration *sessionConfiguration;
@property (nonatomic) long long serverState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)dealloc;
- (void)_queue_deactivate;
- (void)remote_startSessionWithStartDate:(id)a0 completion:(id /* block */)a1;
- (void)remote_startGuiding;
- (void)remote_endSessionWithEndReason:(long long)a0;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_beginSessionTransaction;
- (void)_queue_endSessionWithReason:(long long)a0;
- (BOOL)_shouldUseHealthLiteSession;
- (void)_queue_alertClientSessionDidReceiveHeartRate:(double)a0;
- (void)_queue_endSessionTransaction;
- (id)clientWithErrorHandler:(id /* block */)a0;
- (void)_queue_alertClientSessionDidReceiveError:(id)a0;

@end
