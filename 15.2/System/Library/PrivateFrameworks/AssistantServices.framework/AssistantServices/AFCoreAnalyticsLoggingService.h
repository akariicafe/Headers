@class NSObject;
@protocol OS_dispatch_queue;

@interface AFCoreAnalyticsLoggingService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLoggingService;

- (void)logToCoreAnalyticsCrossDeviceRequestEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_init;

@end
