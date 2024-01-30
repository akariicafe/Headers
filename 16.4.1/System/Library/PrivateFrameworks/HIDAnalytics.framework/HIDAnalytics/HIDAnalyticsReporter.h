@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDAnalyticsReporter : NSObject {
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)registerEvent:(id)a0;
- (void)logAnalyticsEvent:(id)a0;
- (void)dispatchAnalyticsForEvent:(id)a0;
- (void)unregisterEvent:(id)a0;
- (void)dealloc;
- (void)logAnalyticsEvent:(id)a0 eventDescription:(id)a1 eventValue:(id)a2;
- (void)stop;
- (id)init;
- (void)start;
- (id)createBucketData:(id)a0 fieldvalue:(id)a1 fieldDescription:(id)a2;
- (void).cxx_destruct;

@end
