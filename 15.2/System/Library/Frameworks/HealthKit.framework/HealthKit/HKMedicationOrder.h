@class NSUUID, NSString, NSArray, HKMedicationOrderType, NSLocale, HKMedicalDate, HKConcept, HKMedicalCodingCollection, HKMedicalCoding;

@interface HKMedicationOrder : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    HKMedicalCodingCollection *_medicationCodingCollection;
    NSString *_prescriber;
    long long _numberOfFills;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalDate *_writtenDate;
    HKMedicalDate *_endedDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_reasonCodingCollections;
    HKMedicalCodingCollection *_reasonEndedCodingCollection;
    HKMedicalCodingCollection *_statusReasonCodingCollection;
    HKConcept *_medication;
    HKConcept *_status;
    NSArray *_reason;
    HKConcept *_reasonEnded;
    HKConcept *_statusReason;
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
@property (readonly, copy) HKMedicationOrderType *medicationOrderType;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *endedDate;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) HKMedicalCodingCollection *medicationCodingCollection;
@property (readonly) long long numberOfFills;
@property (readonly, copy) NSString *prescriber;
@property (readonly, copy) NSArray *reason;
@property (readonly, copy) NSArray *reasonCodingCollections;
@property (readonly, copy) HKConcept *reasonEnded;
@property (readonly, copy) HKMedicalCodingCollection *reasonEndedCodingCollection;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) HKConcept *statusReason;
@property (readonly, copy) HKMedicalCodingCollection *statusReasonCodingCollection;
@property (readonly, copy) HKMedicalDate *writtenDate;

+ (id)medicationOrderWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 medicationCodingCollection:(id)a11 prescriber:(id)a12 numberOfFills:(long long)a13 dosages:(id)a14 earliestDosageDate:(id)a15 writtenDate:(id)a16 endedDate:(id)a17 statusCoding:(id)a18 reasonCodingCollections:(id)a19 reasonEndedCodingCollection:(id)a20 statusReasonCodingCollection:(id)a21;
+ (id)medicationOrderWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodingCollection:(id)a12 prescriber:(id)a13 numberOfFills:(long long)a14 dosages:(id)a15 earliestDosageDate:(id)a16 writtenDate:(id)a17 endedDate:(id)a18 statusCoding:(id)a19 reasonCodingCollections:(id)a20 reasonEndedCodingCollection:(id)a21 statusReasonCodingCollection:(id)a22;
+ (id)_newMedicationOrderWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodingCollection:(id)a12 prescriber:(id)a13 numberOfFills:(long long)a14 dosages:(id)a15 earliestDosageDate:(id)a16 writtenDate:(id)a17 endedDate:(id)a18 statusCoding:(id)a19 reasonCodingCollections:(id)a20 reasonEndedCodingCollection:(id)a21 statusReasonCodingCollection:(id)a22 config:(id /* block */)a23;
+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (BOOL)groupsByUserDomainConcept;
+ (id)defaultDisplayString;

- (void)encodeWithCoder:(id)a0;
- (void)_setStatus:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)statusCodingCollection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDosages:(id)a0;
- (void)_setEarliestDosageDate:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (void)_setMedication:(id)a0;
- (void)_setMedicationCodingCollection:(id)a0;
- (void)_setPrescriber:(id)a0;
- (void)_setNumberOfFills:(long long)a0;
- (void)_setWrittenDate:(id)a0;
- (void)_setEndedDate:(id)a0;
- (void)_setReasonCodingCollections:(id)a0;
- (void)_setReasonEndedCodingCollection:(id)a0;
- (void)_setReason:(id)a0;
- (void)_setStatusReasonCodingCollection:(id)a0;
- (void)_setReasonEnded:(id)a0;
- (void)_setStatusReason:(id)a0;
- (id)medicalRecordCodings;

@end
