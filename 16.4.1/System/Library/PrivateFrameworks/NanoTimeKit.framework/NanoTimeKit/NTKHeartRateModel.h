@class HKQuantitySample;
@protocol NTKHeartRateModelDelegate;

@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver>

@property (retain, nonatomic) HKQuantitySample *mostRecentHeartRate;
@property (readonly, weak, nonatomic) id<NTKHeartRateModelDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)manager:(id)a0 receivedLatestHeartRateSample:(id)a1;

@end
