@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMicUsageReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (void)_reportsDynamicActivityAttribute:(unsigned long long)a0 bundleId:(id)a1;
- (void)reportMicUsage:(BOOL)a0;
- (void)reportsDynamicActivityAttributeAsync:(unsigned long long)a0 bundleId:(id)a1;
- (void)reportsDynamicActivityAttributeSync:(unsigned long long)a0 bundleId:(id)a1;

@end
