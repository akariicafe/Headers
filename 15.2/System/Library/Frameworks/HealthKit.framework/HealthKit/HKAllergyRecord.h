@class NSUUID, NSString, HKAllergyRecordType, NSArray, NSLocale, HKMedicalCodingCollection, HKConcept, HKMedicalDate, HKMedicalCoding;

@interface HKAllergyRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    HKMedicalCodingCollection *_allergyCodingCollection;
    HKMedicalDate *_onsetDate;
    NSString *_asserter;
    NSArray *_reactions;
    HKMedicalCoding *_criticalityCoding;
    HKMedicalDate *_lastOccurrenceDate;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_verificationStatusCoding;
    HKMedicalCoding *_clinicalStatusCoding;
    HKMedicalCoding *_allergyTypeCoding;
    HKMedicalCoding *_categoryCoding;
    HKConcept *_allergy;
    HKConcept *_criticality;
    HKConcept *_verificationStatus;
    HKConcept *_clinicalStatus;
    HKConcept *_allergyType;
    HKConcept *_category;
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
@property (readonly, copy) HKAllergyRecordType *allergyRecordType;
@property (readonly, copy) HKConcept *allergy;
@property (readonly, copy) HKMedicalCodingCollection *allergyCodingCollection;
@property (readonly, copy) HKConcept *allergyType;
@property (readonly, copy) HKMedicalCoding *allergyTypeCoding;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKConcept *category;
@property (readonly, copy) HKMedicalCoding *categoryCoding;
@property (readonly, copy) HKConcept *clinicalStatus;
@property (readonly, copy) HKMedicalCoding *clinicalStatusCoding;
@property (readonly, copy) HKConcept *criticality;
@property (readonly, copy) HKMedicalCoding *criticalityCoding;
@property (readonly, copy) HKMedicalDate *lastOccurrenceDate;
@property (readonly, copy) HKMedicalDate *onsetDate;
@property (readonly, copy) NSArray *reactions;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly, copy) HKConcept *verificationStatus;
@property (readonly, copy) HKMedicalCoding *verificationStatusCoding;

+ (id)_newAllergyRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 allergyCodingCollection:(id)a12 onsetDate:(id)a13 asserter:(id)a14 reactions:(id)a15 criticalityCoding:(id)a16 lastOccurrenceDate:(id)a17 recordedDate:(id)a18 verificationStatusCoding:(id)a19 clinicalStatusCoding:(id)a20 allergyTypeCoding:(id)a21 categoryCoding:(id)a22 config:(id /* block */)a23;
+ (id)allergyRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 allergyCodingCollection:(id)a12 onsetDate:(id)a13 asserter:(id)a14 reactions:(id)a15 criticalityCoding:(id)a16 lastOccurrenceDate:(id)a17 recordedDate:(id)a18 verificationStatusCoding:(id)a19 clinicalStatusCoding:(id)a20 allergyTypeCoding:(id)a21 categoryCoding:(id)a22;
+ (id)allergyRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 allergyCodingCollection:(id)a11 onsetDate:(id)a12 asserter:(id)a13 reactions:(id)a14 criticalityCoding:(id)a15 lastOccurrenceDate:(id)a16 recordedDate:(id)a17 verificationStatusCoding:(id)a18 clinicalStatusCoding:(id)a19 allergyTypeCoding:(id)a20 categoryCoding:(id)a21;
+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (BOOL)groupsByUserDomainConcept;
+ (id)defaultDisplayString;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void)_setOnsetDate:(id)a0;
- (id)criticalityCodingCollection;
- (id)allergyTypeCodingCollection;
- (void)_setAllergyCodingCollection:(id)a0;
- (void)_setReactions:(id)a0;
- (void)_setCriticalityCoding:(id)a0;
- (void)_setLastOccurrenceDate:(id)a0;
- (void)_setAllergyTypeCoding:(id)a0;
- (void)_setCategoryCoding:(id)a0;
- (id)categoryCodingCollection;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setAsserter:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setCategory:(id)a0;
- (void)_setAllergy:(id)a0;
- (void)_setCriticality:(id)a0;
- (void)_setAllergyType:(id)a0;
- (id)clinicalStatusCodingCollection;
- (id)verificationStatusCodingCollection;
- (void)_setRecordedDate:(id)a0;
- (void)_setClinicalStatusCoding:(id)a0;
- (void)_setVerificationStatusCoding:(id)a0;
- (id)medicalRecordCodings;
- (void)_setClinicalStatus:(id)a0;
- (void)_setVerificationStatus:(id)a0;

@end
