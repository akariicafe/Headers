@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableAllergyReactionList, HDCodableMedicalRecord;

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasAllergyCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *allergyCodingCollection;
@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (retain, nonatomic) NSData *onsetDate;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (retain, nonatomic) NSString *asserter;
@property (readonly, nonatomic) BOOL hasReactions;
@property (retain, nonatomic) HDCodableAllergyReactionList *reactions;
@property (readonly, nonatomic) BOOL hasCriticalityCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *criticalityCoding;
@property (readonly, nonatomic) BOOL hasLastOccurrenceDate;
@property (retain, nonatomic) NSData *lastOccurrenceDate;
@property (readonly, nonatomic) BOOL hasRecordedDate;
@property (retain, nonatomic) NSData *recordedDate;
@property (readonly, nonatomic) BOOL hasVerificationStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *verificationStatusCoding;
@property (readonly, nonatomic) BOOL hasClinicalStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *clinicalStatusCoding;
@property (readonly, nonatomic) BOOL hasAllergyTypeCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *allergyTypeCoding;
@property (readonly, nonatomic) BOOL hasCategoryCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *categoryCoding;

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
