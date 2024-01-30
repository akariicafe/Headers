@class NSNumber, NSArray, HKQuantitySample, NSDate, HKActivitySummary, NSDateComponents;

@interface CHCoachingDiagnosticSubmittableMetrics : NSObject

@property (retain, nonatomic) NSDate *startOfDay;
@property (readonly, nonatomic) NSArray *diagnosticData;
@property (retain, nonatomic) HKActivitySummary *activitySummary;
@property (retain, nonatomic) NSDateComponents *dateOfBirth;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (retain, nonatomic) HKQuantitySample *heightSample;
@property (retain, nonatomic) HKQuantitySample *weightSample;

- (void).cxx_destruct;
- (id)init;
- (void)addDiagnosticDataObject:(id)a0;

@end
