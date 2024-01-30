@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMicUsageReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)reportMicUsage:(BOOL)a0;
- (void)_reportsDynamicActivityAttribute:(unsigned long long)a0 bundleId:(id)a1;
- (void)reportsDynamicActivityAttributeAsync:(unsigned long long)a0 bundleId:(id)a1;
- (void)reportsDynamicActivityAttributeSync:(unsigned long long)a0 bundleId:(id)a1;

@end
