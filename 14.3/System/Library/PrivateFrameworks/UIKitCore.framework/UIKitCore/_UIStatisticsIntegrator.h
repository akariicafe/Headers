@class NSObject;
@protocol OS_dispatch_queue;

@interface _UIStatisticsIntegrator : NSObject {
    NSObject<OS_dispatch_queue> *_reportingQueue;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;
+ (void)createSharedInstanceIfNecessary;

- (id)init;
- (void).cxx_destruct;
- (void)resetValueForKey:(id)a0;
- (void)incrementValueBy:(long long)a0 forKey:(id)a1;
- (void)setValue:(long long)a0 forKey:(id)a1;
- (void)recordDistributionTime:(unsigned long long)a0 forKey:(id)a1;
- (void)recordDistributionValue:(double)a0 forKey:(id)a1;
- (void)batchRecord:(id /* block */)a0;
- (void)resetDistributionToValue:(double)a0 forKey:(id)a1;
- (void)resetDistributionForKey:(id)a0;

@end
