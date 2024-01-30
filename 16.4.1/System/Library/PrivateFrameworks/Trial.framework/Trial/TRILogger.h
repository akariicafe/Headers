@class NSArray, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface TRILogger : NSObject {
    int _projectId;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    TRIClient *_client;
    NSArray *_logHandlers;
}

- (id)initWithClient:(id)a0 projectId:(int)a1 logHandlers:(id)a2;
- (void)logWithProjectNameAndTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2 trialSystemTelemetry:(id)a3;
- (void)logWithTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2;
- (void)logWithTrackingId:(id)a0 logLevel:(long long)a1 message:(id)a2;
- (void)logWithMLRuntimeDimensions:(id)a0 metrics:(id)a1 factorState:(id)a2;
- (void)logWithTrackingId:(id)a0 message:(id)a1;
- (id)messageWithOneofField:(id)a0 withName:(id)a1;
- (void)_dispatchLogEvent:(id)a0;
- (unsigned long long)_incrementedLogEventCount;
- (void)logWithTrackingId:(id)a0 metric:(id)a1 dimensions:(id)a2;
- (void)logWithTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2 systemDimensions:(id)a3 trialSystemTelemetry:(id)a4;
- (id)initWithProjectId:(int)a0;
- (void)logWithTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2 trialSystemTelemetry:(id)a3;
- (id)init;
- (void)logWithTrackingId:(id)a0 metric:(id)a1;
- (id)initWithProjectId:(int)a0 logHandlers:(id)a1;
- (void)logWithNamespaceName:(id)a0 metrics:(id)a1 dimensions:(id)a2;
- (void)logWithTrackingId:(id)a0 logLevel:(long long)a1 message:(id)a2 args:(char *)a3;
- (void).cxx_destruct;
- (void)logEvent:(id)a0;

@end
