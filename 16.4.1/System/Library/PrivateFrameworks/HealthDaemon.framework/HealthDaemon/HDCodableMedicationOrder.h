@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableMedicationDosageList, HDCodableMedicalCodingListList, HDCodableMedicalRecord;

@interface HDCodableMedicationOrder : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char numberOfFills : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasMedicationCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodingCollection;
@property (readonly, nonatomic) BOOL hasPrescriber;
@property (retain, nonatomic) NSString *prescriber;
@property (nonatomic) BOOL hasNumberOfFills;
@property (nonatomic) long long numberOfFills;
@property (readonly, nonatomic) BOOL hasDosages;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages;
@property (readonly, nonatomic) BOOL hasEarliestDosageDate;
@property (retain, nonatomic) NSData *earliestDosageDate;
@property (readonly, nonatomic) BOOL hasWrittenDate;
@property (retain, nonatomic) NSData *writtenDate;
@property (readonly, nonatomic) BOOL hasEndedDate;
@property (retain, nonatomic) NSData *endedDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasReasonCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonCodingCollections;
@property (readonly, nonatomic) BOOL hasReasonEndedCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *reasonEndedCodingCollection;
@property (readonly, nonatomic) BOOL hasStatusReasonCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *statusReasonCodingCollection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end
