@interface HKMedicationDeviceConfiguration : NSObject

@property (class, readonly, nonatomic) BOOL supportsOntologyBackedMedications;

+ (BOOL)_isSupportedLocale:(id)a0;
+ (BOOL)_isSupportedRegion:(id)a0;

- (id)init;

@end
