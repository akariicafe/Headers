@class NSObject;
@protocol OS_dispatch_queue;

@interface _UIStatisticsIntegrator : NSObject {
    NSObject<OS_dispatch_queue> *_reportingQueue;
}

+ (id)sharedInstance;
+ (void)createSharedInstanceIfNecessary;
+ (void)setSharedInstance:(id)a0;

- (void)incrementValueBy:(long long)a0 forKey:(id)a1;
- (void)resetDistributionForKey:(id)a0;
- (void)recordDistributionTime:(unsigned long long)a0 forKey:(id)a1;
- (void)resetValueForKey:(id)a0;
- (void)setValue:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)recordDistributionValue:(double)a0 forKey:(id)a1;
- (void)batchRecord:(id /* block */)a0;
- (void)resetDistributionToValue:(double)a0 forKey:(id)a1;

@end
