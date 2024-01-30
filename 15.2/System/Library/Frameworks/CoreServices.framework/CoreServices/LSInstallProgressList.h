@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {
    NSMutableDictionary *_progresses;
    NSMutableDictionary *_subscriptions;
}

- (void)removeSubscriberForPublishingKey:(id)a0 andBundleID:(id)a1;
- (id)description;
- (void)removeProgressForBundleID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0 forPublishingKey:(id)a1 andBundleID:(id)a2;
- (id)subscriberForBundleID:(id)a0 andPublishingKey:(id)a1;
- (id)progressForBundleID:(id)a0;
- (void)setProgress:(id)a0 forBundleID:(id)a1;

@end
