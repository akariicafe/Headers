@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)FHIRDeviceStatus;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRGoalStatus;
+ (id)FHIRImmunizationStatus;
+ (id)LOINCCodeSystem;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)externalCodeSystems;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)RxNormCodeSystem;
+ (id)adHocConceptSystem;
+ (id)ICD10System;
+ (id)FHIRMedicationAdminStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRCoverageStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)FHIRDiagnosticReportStatus;
+ (id)unknownSystem;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIREventStatus;
+ (id)SNOMEDCodeSystem;
+ (id)FHIRConditionVerificationStatus;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)argonautHL7System;
+ (id)CVXSystem;
+ (id)FHIRCarePlanStatus;
+ (id)ICD10USSystem;
+ (id)FHIRProcedureStatus;
+ (id)UCUMSystem;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRConditionClinicalStatus;
+ (id)textSystem;
+ (id)NDCSystem;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)FHIRObservationStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCustomIdentifier:(id)a0;
- (long long)ontology_hasCodingSystemAttributeIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (void)encodeWithCoder:(id)a0;

@end
