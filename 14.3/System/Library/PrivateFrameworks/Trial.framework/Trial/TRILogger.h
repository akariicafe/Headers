@class NSObject;
@protocol OS_dispatch_queue;

@interface TRILogger : NSObject {
    int _projectId;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

- (id)init;
- (void)logWithTrackingId:(id)a0 message:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_incrementedLogEventCount;
- (void)_dispatchLogEvent:(id)a0;
- (id)initWithProjectId:(int)a0;
- (void)logEvent:(id)a0;
- (void)logWithTrackingId:(id)a0 metrics:(id)a1 dimensions:(id)a2;
- (id)messageWithOneofField:(id)a0 withName:(id)a1;
- (void)logWithTrackingId:(id)a0 logLevel:(long long)a1 message:(id)a2 args:(char *)a3;
- (void)logWithTrackingId:(id)a0 metric:(id)a1;
- (void)logWithTrackingId:(id)a0 logLevel:(long long)a1 message:(id)a2;
- (void)logWithTrackingId:(id)a0 metric:(id)a1 dimensions:(id)a2;

@end
