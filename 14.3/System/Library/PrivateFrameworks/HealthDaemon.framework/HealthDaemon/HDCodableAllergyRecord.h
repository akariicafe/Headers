@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableAllergyReactionList, HDCodableMedicalRecord;

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasAllergyCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *allergyCodings;
@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (retain, nonatomic) NSData *onsetDate;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (retain, nonatomic) NSString *asserter;
@property (readonly, nonatomic) BOOL hasReactions;
@property (retain, nonatomic) HDCodableAllergyReactionList *reactions;
@property (readonly, nonatomic) BOOL hasCriticalityCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *criticalityCoding;
@property (readonly, nonatomic) BOOL hasLastOccurenceDate;
@property (retain, nonatomic) NSData *lastOccurenceDate;
@property (readonly, nonatomic) BOOL hasRecordedDate;
@property (retain, nonatomic) NSData *recordedDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end
