@class NSUUID, NSString, NSArray, HKConditionRecordType, HKInspectableValue, NSLocale, HKConcept, HKMedicalCodingCollection, HKMedicalDate, HKMedicalCoding;

@interface HKConditionRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    HKMedicalCodingCollection *_conditionCodingCollection;
    NSArray *_categoriesCodingCollections;
    NSString *_asserter;
    HKInspectableValue *_abatement;
    HKInspectableValue *_onset;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_clinicalStatusCoding;
    HKMedicalCoding *_verificationStatusCoding;
    HKMedicalCodingCollection *_severityCodingCollection;
    NSArray *_bodySitesCodingCollections;
    HKConcept *_condition;
    NSArray *_categories;
    HKConcept *_clinicalStatus;
    HKConcept *_verificationStatus;
    HKConcept *_severity;
    NSArray *_bodySites;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKConditionRecordType *conditionRecordType;
@property (readonly, copy) HKInspectableValue *abatement;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) NSArray *bodySites;
@property (readonly, copy) NSArray *bodySitesCodingCollections;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) HKConcept *clinicalStatus;
@property (readonly, copy) HKMedicalCoding *clinicalStatusCoding;
@property (readonly, copy) HKConcept *condition;
@property (readonly, copy) HKMedicalCodingCollection *conditionCodingCollection;
@property (readonly, copy) HKInspectableValue *onset;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly, copy) HKConcept *severity;
@property (readonly, copy) HKMedicalCodingCollection *severityCodingCollection;
@property (readonly, copy) HKConcept *verificationStatus;
@property (readonly, copy) HKMedicalCoding *verificationStatusCoding;

+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;
+ (id)_newConditionRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 conditionCodingCollection:(id)a12 categoriesCodingCollections:(id)a13 asserter:(id)a14 abatement:(id)a15 onset:(id)a16 recordedDate:(id)a17 clinicalStatusCoding:(id)a18 verificationStatusCoding:(id)a19 severityCodingCollection:(id)a20 bodySitesCodingCollections:(id)a21 config:(id /* block */)a22;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)conditionRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 conditionCodingCollection:(id)a11 categoriesCodingCollections:(id)a12 asserter:(id)a13 abatement:(id)a14 onset:(id)a15 recordedDate:(id)a16 clinicalStatusCoding:(id)a17 verificationStatusCoding:(id)a18 severityCodingCollection:(id)a19 bodySitesCodingCollections:(id)a20;
+ (id)conditionRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 conditionCodingCollection:(id)a12 categoriesCodingCollections:(id)a13 asserter:(id)a14 abatement:(id)a15 onset:(id)a16 recordedDate:(id)a17 clinicalStatusCoding:(id)a18 verificationStatusCoding:(id)a19 severityCodingCollection:(id)a20 bodySitesCodingCollections:(id)a21;
+ (id)defaultDisplayString;
+ (BOOL)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (void)_setBodySitesCodingCollections:(id)a0;
- (void)_setCategories:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setAbatement:(id)a0;
- (void)_setAsserter:(id)a0;
- (void)_setBodySites:(id)a0;
- (void)_setCategoriesCodingCollections:(id)a0;
- (void)_setClinicalStatus:(id)a0;
- (void)_setClinicalStatusCoding:(id)a0;
- (void)_setCondition:(id)a0;
- (void)_setConditionCodingCollection:(id)a0;
- (void)_setOnset:(id)a0;
- (void)_setRecordedDate:(id)a0;
- (void)_setSeverity:(id)a0;
- (void)_setSeverityCodingCollection:(id)a0;
- (void)_setVerificationStatus:(id)a0;
- (void)_setVerificationStatusCoding:(id)a0;
- (id)clinicalStatusCodingCollection;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)medicalRecordCodings;
- (id)verificationStatusCodingCollection;

@end
