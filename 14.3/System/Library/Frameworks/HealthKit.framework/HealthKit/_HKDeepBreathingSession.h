@class _HKDeepBreathingSessionConfiguration, NSString, HKTaskServerProxyProvider, NSObject;
@protocol _HKDeepBreathingSessionDelegate, OS_dispatch_queue;

@interface _HKDeepBreathingSession : NSObject <_HKXPCExportable, _HKDeepBreathingSessionClient> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    long long _serverState;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (weak) id<_HKDeepBreathingSessionDelegate> delegate;
@property (readonly) long long serverState;
@property (readonly, copy) _HKDeepBreathingSessionConfiguration *sessionConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void)fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0 configuration:(id)a1;
- (void)_queue_deactivate;
- (void)_queue_transitionToServerState:(long long)a0;
- (BOOL)_isServerAttached;
- (void)_queue_alertDelegateDidEncounterError:(id)a0;
- (void)startGuiding;
- (BOOL)_queue_isServerAttached;
- (void)_queue_alertDelegateDidReceiveHeartRate:(double)a0;
- (void)clientRemote_sessionDidReceiveError:(id)a0;
- (void)_connectionDidEncounterError:(id)a0;
- (void)clientRemote_sessionDidReceiveHeartRate:(double)a0;
- (void)startSessionWithStartDate:(id)a0 completion:(id /* block */)a1;
- (void)endSessionWithEndReason:(long long)a0;
- (id)exportedInterface;

@end
