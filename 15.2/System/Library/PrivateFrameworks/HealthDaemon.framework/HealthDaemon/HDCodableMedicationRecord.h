@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableMedicationDosageList, HDCodableMedicalCodingListList, HDCodableMedicalRecord;

@interface HDCodableMedicationRecord : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char assertionType : 1; unsigned char notTaken : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasMedicationCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodingCollection;
@property (nonatomic) BOOL hasAssertionType;
@property (nonatomic) long long assertionType;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (retain, nonatomic) NSString *asserter;
@property (readonly, nonatomic) BOOL hasAssertionDate;
@property (retain, nonatomic) NSData *assertionDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasDosages;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages;
@property (readonly, nonatomic) BOOL hasEarliestDosageDate;
@property (retain, nonatomic) NSData *earliestDosageDate;
@property (readonly, nonatomic) BOOL hasReasonForUseCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonForUseCodingCollections;
@property (nonatomic) BOOL hasNotTaken;
@property (nonatomic) BOOL notTaken;
@property (readonly, nonatomic) BOOL hasReasonsNotTakenCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotTakenCodingCollections;
@property (readonly, nonatomic) BOOL hasEffectiveStartDate;
@property (retain, nonatomic) NSData *effectiveStartDate;
@property (readonly, nonatomic) BOOL hasEffectiveEndDate;
@property (retain, nonatomic) NSData *effectiveEndDate;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end
