@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)FHIREventStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)textSystem;
+ (id)argonautHL7System;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRDeviceStatus;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)appleOntologySystem;
+ (id)ICD9System;
+ (id)FHIRCoverageStatus;
+ (id)UCUMSystem;
+ (id)adHocConceptSystem;
+ (id)FHIRAllergyIntoleranceType;
+ (id)SNOMEDCodeSystem;
+ (id)ICD10System;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRProcedureStatus;
+ (id)RxNormCodeSystem;
+ (id)LOINCCodeSystem;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRImmunizationStatus;
+ (id)CVXSystem;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRCoverageClassification;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)FHIRObservationStatus;
+ (id)NDCSystem;
+ (id)FHIRCoverageType;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)externalCodeSystems;
+ (id)unknownSystem;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRGoalStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRCarePlanStatus;

- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCustomIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)ontology_hasCodingSystemAttributeIdentifier;
- (unsigned long long)hash;

@end
