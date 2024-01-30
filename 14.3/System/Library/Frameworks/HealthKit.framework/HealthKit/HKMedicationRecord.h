@class NSUUID, NSString, NSArray, HKMedicationRecordType, HKMedicalDate, NSLocale, HKConcept, HKMedicalCoding;

@interface HKMedicationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    NSArray *_medicationCodings;
    long long _assertionType;
    NSString *_asserter;
    HKMedicalDate *_assertionDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    NSArray *_reasonForUseCodings;
    BOOL _notTaken;
    NSArray *_reasonsNotTakenCodings;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalDate *_effectiveEndDate;
    HKConcept *_medication;
    HKConcept *_status;
    HKConcept *_reasonForUse;
    NSArray *_reasonsNotTaken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKMedicationRecordType *medicationRecordType;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKMedicalDate *assertionDate;
@property (readonly) long long assertionType;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly) BOOL notTaken;
@property (readonly, copy) HKConcept *reasonForUse;
@property (readonly, copy) NSArray *reasonForUseCodings;
@property (readonly, copy) NSArray *reasonsNotTaken;
@property (readonly, copy) NSArray *reasonsNotTakenCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (id)_newMedicationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodings:(id)a12 assertionType:(long long)a13 asserter:(id)a14 assertionDate:(id)a15 statusCoding:(id)a16 dosages:(id)a17 earliestDosageDate:(id)a18 reasonForUseCodings:(id)a19 notTaken:(BOOL)a20 reasonsNotTakenCodings:(id)a21 effectiveStartDate:(id)a22 effectiveEndDate:(id)a23 config:(id /* block */)a24;
+ (id)medicationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 medicationCodings:(id)a11 assertionType:(long long)a12 asserter:(id)a13 assertionDate:(id)a14 statusCoding:(id)a15 dosages:(id)a16 earliestDosageDate:(id)a17 reasonForUseCodings:(id)a18 notTaken:(BOOL)a19 reasonsNotTakenCodings:(id)a20 effectiveStartDate:(id)a21 effectiveEndDate:(id)a22;
+ (id)medicationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodings:(id)a12 assertionType:(long long)a13 asserter:(id)a14 assertionDate:(id)a15 statusCoding:(id)a16 dosages:(id)a17 earliestDosageDate:(id)a18 reasonForUseCodings:(id)a19 notTaken:(BOOL)a20 reasonsNotTakenCodings:(id)a21 effectiveStartDate:(id)a22 effectiveEndDate:(id)a23;
+ (BOOL)supportsEquivalence;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (BOOL)_isConcreteObjectClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (void)_setStatus:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)statusCodingCollection;
- (id)medicationCodingsCollection;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setMedicationCodings:(id)a0;
- (void)_setDosages:(id)a0;
- (void)_setEarliestDosageDate:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (void)_setMedication:(id)a0;
- (void)_setEffectiveStartDate:(id)a0;
- (void)_setEffectiveEndDate:(id)a0;
- (id)medicalRecordCodings;
- (void)_setAssertionType:(long long)a0;
- (id)reasonForUseCodingsCollection;
- (id)reasonsNotTakenCodingsCollections;
- (void)_setAsserter:(id)a0;
- (void)_setAssertionDate:(id)a0;
- (void)_setNotTaken:(BOOL)a0;
- (void)_setReasonForUseCodings:(id)a0;
- (void)_setReasonsNotTakenCodings:(id)a0;
- (void)_setReasonForUse:(id)a0;
- (void)_setReasonsNotTaken:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
