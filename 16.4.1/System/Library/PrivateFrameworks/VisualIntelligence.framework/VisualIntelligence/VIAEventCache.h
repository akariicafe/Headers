@class NSMutableDictionary, NSObject;
@protocol VIAnalyticsTestingDelegate, OS_dispatch_queue;

@interface VIAEventCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appToEventMap;
}

@property (weak, nonatomic) id<VIAnalyticsTestingDelegate> testingDelegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)cachedEventForBundleID:(id)a0 queryID:(unsigned long long)a1;
- (id)_cachedEventsForBundleID:(id)a0;
- (void)cacheEvent:(id)a0;

@end
