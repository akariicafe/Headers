@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)textSystem;
+ (id)externalCodeSystems;
+ (id)NDCSystem;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)unknownSystem;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRCoverageStatus;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)SNOMEDCodeSystem;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)appleHealthDataTypeSystem;
+ (id)FHIRCoverageType;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRImmunizationStatus;
+ (id)FHIRCoverageClassification;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)LOINCCodeSystem;
+ (id)ICD10System;
+ (id)appleOntologySystem;
+ (id)FHIRMedicationAdminStatus;
+ (id)adHocConceptSystem;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)RxNormCodeSystem;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRDeviceStatus;
+ (id)argonautHL7System;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)FHIRMedicationRequestStatus;
+ (id)CVXSystem;
+ (id)FHIRGoalStatus;
+ (id)UCUMSystem;
+ (id)FHIREventStatus;
+ (id)FHIRProcedureStatus;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRObservationStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)FHIRCarePlanStatus;
+ (id)ICD9System;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (long long)ontology_hasCodingSystemAttributeIdentifier;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCustomIdentifier:(id)a0;
- (void).cxx_destruct;

@end
