@class NSArray, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface TRILogger : NSObject {
    int _projectId;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    TRIClient *_client;
    NSArray *_logHandlers;
}

- (void)logEvent:(id)a0;
- (void)logWithProjectNameAndTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2 trialSystemTelemetry:(id)a3;
- (id)initWithProjectId:(int)a0 logHandlers:(id)a1;
- (void)logWithNamespaceName:(id)a0 metrics:(id)a1 dimensions:(id)a2;
- (id)initWithProjectId:(int)a0;
- (void)logWithTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2 trialSystemTelemetry:(id)a3;
- (void)logWithTrackingId:(id)a0 metric:(id)a1 dimensions:(id)a2;
- (void)logWithTrackingId:(id)a0 logLevel:(long long)a1 message:(id)a2;
- (void).cxx_destruct;
- (void)_dispatchLogEvent:(id)a0;
- (id)init;
- (id)messageWithOneofField:(id)a0 withName:(id)a1;
- (void)logWithTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2;
- (id)initWithClient:(id)a0 projectId:(int)a1 logHandlers:(id)a2;
- (void)logWithTrackingId:(id)a0 logLevel:(long long)a1 message:(id)a2 args:(char *)a3;
- (void)logWithTrackingId:(id)a0 metric:(id)a1;
- (void)logWithTrackingId:(id)a0 message:(id)a1;
- (unsigned long long)_incrementedLogEventCount;

@end
