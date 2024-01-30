@class NSString;

@interface HKMedicationDoseEventType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allTypes;
+ (id)medicationDoseEventType;

- (long long)aggregationStyleForStatistics;
- (id)canonicalUnitForStatistics;
- (BOOL)supportsStatisticOptions:(unsigned long long)a0;
- (void)validateUnitForStatistic:(id)a0;
- (id)underlyingSampleType;

@end
