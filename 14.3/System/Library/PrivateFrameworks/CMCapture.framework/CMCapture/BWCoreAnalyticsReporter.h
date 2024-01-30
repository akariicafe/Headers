@class NSObject;
@protocol OS_dispatch_queue;

@interface BWCoreAnalyticsReporter : NSObject {
    NSObject<OS_dispatch_queue> *_coreAnalyticsDispatchQueue;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (int)clientApplicationIDType:(id)a0;

- (id)init;
- (void)dealloc;
- (void)sendEvent:(id)a0;

@end
