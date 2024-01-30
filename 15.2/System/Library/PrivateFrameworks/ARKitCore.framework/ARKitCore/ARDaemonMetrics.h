@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ARDaemonMetrics : NSObject {
    unsigned long long _peakMemoryUsageInMegabytes;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSMutableDictionary *_activeServiceCountPerClient;
    NSMutableDictionary *_allServicesUsedPerClient;
}

+ (id)sharedDaemonMetrics;

- (void).cxx_destruct;
- (id)init;
- (void)reportServiceAddedWithName:(id)a0 clientBundleIdentifier:(id)a1;
- (void)reportServiceRemovedWithName:(id)a0 clientBundleIdentifier:(id)a1;
- (void)reportMemoryFootprintInBytes:(unsigned long long)a0;
- (void)setCurrentMemoryFootprintAsPeak;
- (void)reportCoreAnalyticsDaemonEventWithServiceName:(id)a0 clientBundleIdentifier:(id)a1 isServiceRemoved:(BOOL)a2 isDisconnectingClient:(BOOL)a3;

@end
