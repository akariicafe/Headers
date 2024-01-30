@class HKElectrocardiogram, NSString, HKHealthStore, UIColor, NSDateComponents;

@interface WDElectrocardiogramReportDataSource : NSObject <HRElectrocardiogramReportDataSource>

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) long long activeAlgorithmVersion;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents;
@property (readonly, nonatomic) HKElectrocardiogram *sample;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_fetchDemographicInformation;
- (id)initWithSample:(id)a0 healthStore:(id)a1 activeAlgorithmVersion:(long long)a2;

@end
