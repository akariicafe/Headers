@class NSString;

@interface HKHRCardioFitnessAnalyticsSignalSource : NSObject

@property (readonly, nonatomic) NSString *activeWatchProductType;
@property (readonly, nonatomic) NSString *featureVersion;
@property (readonly, nonatomic) BOOL isImproveHealthAndActivityAllowed;

- (long long)bucketedAgeWithError:(id *)a0;
- (id)biologicalSexStringWithError:(id *)a0;
- (id)biologicalSexStringForBiologicalSex:(long long)a0;
- (long long)bucketedAgeForDateOfBirthComponents:(id)a0;

@end
