@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ARDaemonMetrics : NSObject {
    unsigned long long _peakMemoryUsage;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSMutableDictionary *_activeServiceCountPerClient;
    NSMutableDictionary *_allServicesUsedPerClient;
}

+ (id)sharedDaemonMetrics;

- (id)init;
- (void).cxx_destruct;
- (void)reportServiceAddedWithName:(id)a0 clientBundleIdentifier:(id)a1;
- (void)reportServiceRemovedWithName:(id)a0 clientBundleIdentifier:(id)a1;
- (void)reportMemoryFootprint:(unsigned long long)a0;

@end
