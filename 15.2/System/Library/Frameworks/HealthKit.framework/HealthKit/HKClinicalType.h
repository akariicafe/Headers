@interface HKClinicalType : HKSampleType

+ (id)allTypes;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)medicationRecordType;
+ (id)immunizationRecordType;
+ (id)allergyRecordType;
+ (id)conditionRecordType;
+ (id)vitalSignRecordType;
+ (id)coverageRecordType;
+ (id)labResultRecordType;
+ (id)procedureRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)_requiresPerObjectAuthorization;
- (BOOL)isClinicalType;
- (BOOL)_requiresAuthorization;

@end
