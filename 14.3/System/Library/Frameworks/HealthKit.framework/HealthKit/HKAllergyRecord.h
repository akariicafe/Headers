@class NSUUID, NSString, NSArray, HKAllergyRecordType, NSLocale, HKMedicalDate, HKConcept, HKMedicalCoding;

@interface HKAllergyRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    NSArray *_allergyCodings;
    HKMedicalDate *_onsetDate;
    NSString *_asserter;
    NSArray *_reactions;
    HKMedicalCoding *_criticalityCoding;
    HKMedicalDate *_lastOccurenceDate;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_statusCoding;
    HKConcept *_allergy;
    HKConcept *_criticality;
    HKConcept *_status;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKAllergyRecordType *allergyRecordType;
@property (readonly, copy) HKConcept *allergy;
@property (readonly, copy) NSArray *allergyCodings;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKConcept *criticality;
@property (readonly, copy) HKMedicalCoding *criticalityCoding;
@property (readonly, copy) HKMedicalDate *lastOccurenceDate;
@property (readonly, copy) HKMedicalDate *onsetDate;
@property (readonly, copy) NSArray *reactions;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (id)allergyRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 allergyCodings:(id)a11 onsetDate:(id)a12 asserter:(id)a13 reactions:(id)a14 criticalityCoding:(id)a15 lastOccurenceDate:(id)a16 recordedDate:(id)a17 statusCoding:(id)a18;
+ (id)allergyRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 allergyCodings:(id)a12 onsetDate:(id)a13 asserter:(id)a14 reactions:(id)a15 criticalityCoding:(id)a16 lastOccurenceDate:(id)a17 recordedDate:(id)a18 statusCoding:(id)a19;
+ (BOOL)supportsEquivalence;
+ (id)_newAllergyRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 allergyCodings:(id)a12 onsetDate:(id)a13 asserter:(id)a14 reactions:(id)a15 criticalityCoding:(id)a16 lastOccurenceDate:(id)a17 recordedDate:(id)a18 statusCoding:(id)a19 config:(id /* block */)a20;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (BOOL)_isConcreteObjectClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setRecordedDate:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)allergyCodingsCollection;
- (id)criticalityCodingCollection;
- (void)_setAllergyCodings:(id)a0;
- (void)_setOnsetDate:(id)a0;
- (void)_setReactions:(id)a0;
- (void)_setCriticalityCoding:(id)a0;
- (void)_setLastOccurenceDate:(id)a0;
- (void)_setStatus:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)statusCodingCollection;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setStatusCoding:(id)a0;
- (id)medicalRecordCodings;
- (void)_setAsserter:(id)a0;
- (void)_setAllergy:(id)a0;
- (void)_setCriticality:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
