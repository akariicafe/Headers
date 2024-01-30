@interface HKClinicalType : HKSampleType

+ (id)allergyRecordType;
+ (id)coverageRecordType;
+ (id)conditionRecordType;
+ (id)medicationRecordType;
+ (id)procedureRecordType;
+ (id)allTypes;
+ (id)clinicalNoteRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)_requiresAuthorization;
- (BOOL)isClinicalType;
- (BOOL)requiresPerObjectAuthorization;

@end
