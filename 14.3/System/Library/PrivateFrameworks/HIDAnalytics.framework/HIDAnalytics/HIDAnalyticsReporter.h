@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDAnalyticsReporter : NSObject {
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

- (id)init;
- (void).cxx_destruct;
- (void)unregisterEvent:(id)a0;
- (void)dealloc;
- (void)stop;
- (id)createBucketData:(id)a0 fieldvalue:(id)a1 fieldDescription:(id)a2;
- (void)start;
- (void)logAnalyticsEvent:(id)a0;
- (void)logAnalyticsEvent:(id)a0 eventDescription:(id)a1 eventValue:(id)a2;
- (void)registerEvent:(id)a0;
- (void)dispatchAnalyticsForEvent:(id)a0;

@end
