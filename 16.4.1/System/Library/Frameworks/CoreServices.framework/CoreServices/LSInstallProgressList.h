@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {
    NSMutableDictionary *_progresses;
    NSMutableDictionary *_subscriptions;
}

- (void)setProgress:(id)a0 forBundleID:(id)a1;
- (void)addSubscriber:(id)a0 forPublishingKey:(id)a1 andBundleID:(id)a2;
- (id)subscriberForBundleID:(id)a0 andPublishingKey:(id)a1;
- (id)progressForBundleID:(id)a0;
- (void)removeProgressForBundleID:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)removeSubscriberForPublishingKey:(id)a0 andBundleID:(id)a1;

@end
