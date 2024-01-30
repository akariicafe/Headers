@class HKQuantity, NSArray, NSNumber, HKMobileCountryCode;

@interface HKMCOnboardingCompletionInfo : NSObject

@property (readonly, nonatomic) HKQuantity *userEnteredCycleLength;
@property (readonly, nonatomic) HKQuantity *userEnteredPeriodLength;
@property (readonly, nonatomic) NSNumber *userEnteredLastPeriodStartDay;
@property (readonly, nonatomic) NSArray *addedCycleFactors;
@property (readonly, nonatomic) NSArray *deletedCycleFactors;
@property (retain, nonatomic) HKMobileCountryCode *heartRateInputSupportedCountryCode;
@property (retain, nonatomic) HKMobileCountryCode *deviationDetectionSupportedCountryCode;
@property (retain, nonatomic) HKMobileCountryCode *wristTemperatureInputSupportedCountryCode;

- (void).cxx_destruct;
- (id)initWithUserEnteredCycleLength:(id)a0 userEnteredPeriodLength:(id)a1 userEnteredLastPeriodStartDay:(id)a2 addedCycleFactors:(id)a3 deletedCycleFactors:(id)a4 heartRateInputSupportedCountryCode:(id)a5;

@end
