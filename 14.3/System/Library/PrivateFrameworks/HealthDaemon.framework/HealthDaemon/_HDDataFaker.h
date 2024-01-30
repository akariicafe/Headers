@class HKQuantity, NSString, NSArray, NSOperationQueue;

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate> {
    long long _activityType;
    HKQuantity *_speed;
    id /* block */ _objectHandler;
    NSOperationQueue *_operationQueue;
    NSArray *_modules;
}

@property (readonly, nonatomic) long long activityType;
@property (readonly, nonatomic) HKQuantity *speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSupportedActivityType:(long long)a0;

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)_generateSamplesForPeriodIncludeLessFrequentSamples:(BOOL)a0;
- (void)demoDataModule:(id)a0 didProduceDataObject:(id)a1;
- (id)initWithActivityType:(long long)a0 speed:(id)a1 objectHandler:(id /* block */)a2;
- (void)generateDataForMinutes:(double)a0 completion:(id /* block */)a1;

@end
