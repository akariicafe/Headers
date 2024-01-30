@interface HKClinicalType : HKSampleType

+ (id)conditionRecordType;
+ (id)medicationRecordType;
+ (id)coverageRecordType;
+ (id)allTypes;
+ (id)allergyRecordType;
+ (id)vitalSignRecordType;
+ (id)labResultRecordType;
+ (id)immunizationRecordType;
+ (id)procedureRecordType;

- (BOOL)isClinicalType;

@end
