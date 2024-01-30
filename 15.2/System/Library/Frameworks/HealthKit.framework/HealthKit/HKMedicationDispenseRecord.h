@class NSUUID, NSString, NSArray, HKCodedQuantity, HKMedicalDate, NSLocale, HKConcept, HKMedicationDispenseRecordType, HKMedicalCoding;

@interface HKMedicationDispenseRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    NSArray *_medicationCodings;
    HKCodedQuantity *_quantityDispensed;
    HKMedicalDate *_preparationDate;
    HKMedicalDate *_handOverDate;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalCoding *_statusCoding;
    HKCodedQuantity *_daysSupplyQuantity;
    HKConcept *_medication;
    HKConcept *_status;
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
@property (readonly, copy) HKMedicationDispenseRecordType *medicationDispenseRecordType;
@property (readonly, copy) HKCodedQuantity *daysSupplyQuantity;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *handOverDate;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicalDate *preparationDate;
@property (readonly, copy) HKCodedQuantity *quantityDispensed;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (id)_newMedicationDispenseRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodings:(id)a12 quantityDispensed:(id)a13 preparationDate:(id)a14 handOverDate:(id)a15 dosages:(id)a16 earliestDosageDate:(id)a17 statusCoding:(id)a18 daysSupplyQuantity:(id)a19 config:(id /* block */)a20;
+ (id)medicationDispenseRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 medicationCodings:(id)a11 quantityDispensed:(id)a12 preparationDate:(id)a13 handOverDate:(id)a14 dosages:(id)a15 earliestDosageDate:(id)a16 statusCoding:(id)a17 daysSupplyQuantity:(id)a18;
+ (id)medicationDispenseRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 medicationCodings:(id)a12 quantityDispensed:(id)a13 preparationDate:(id)a14 handOverDate:(id)a15 dosages:(id)a16 earliestDosageDate:(id)a17 statusCoding:(id)a18 daysSupplyQuantity:(id)a19;
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
- (id)medicationCodingsCollection;
- (id)statusCodingCollection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setMedicationCodings:(id)a0;
- (void)_setQuantityDispensed:(id)a0;
- (void)_setPreparationDate:(id)a0;
- (void)_setHandOverDate:(id)a0;
- (void)_setDosages:(id)a0;
- (void)_setEarliestDosageDate:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (void)_setDaysSupplyQuantity:(id)a0;
- (void)_setMedication:(id)a0;
- (id)medicalRecordCodings;

@end
