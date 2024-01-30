@class HKQuantity, NSString, NSArray, NSOperationQueue;

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate> {
    long long _activityType;
    long long _locationType;
    HKQuantity *_speed;
    id /* block */ _objectHandler;
    NSOperationQueue *_operationQueue;
    NSArray *_modules;
}

@property (readonly, nonatomic) long long activityType;
@property (readonly, nonatomic) long long locationType;
@property (readonly, nonatomic) HKQuantity *speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)demoDataModule:(id)a0 didProduceDataObject:(id)a1;
- (void)generateDataForMinutes:(double)a0 completion:(id /* block */)a1;
- (id)initWithActivityType:(long long)a0 locationType:(long long)a1 speed:(id)a2 objectHandler:(id /* block */)a3;

@end
