@class HDCodableMedicalCodingList, NSString, HDCodableInspectableValue, NSData, HDCodableMedicalCodingListList, HDCodableMedicalCoding, HDCodableMedicalRecord;

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasConditionCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *conditionCodingCollection;
@property (readonly, nonatomic) BOOL hasCategoriesCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *categoriesCodingCollections;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (retain, nonatomic) NSString *asserter;
@property (readonly, nonatomic) BOOL hasAbatement;
@property (retain, nonatomic) HDCodableInspectableValue *abatement;
@property (readonly, nonatomic) BOOL hasOnset;
@property (retain, nonatomic) HDCodableInspectableValue *onset;
@property (readonly, nonatomic) BOOL hasRecordedDate;
@property (retain, nonatomic) NSData *recordedDate;
@property (readonly, nonatomic) BOOL hasClinicalStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *clinicalStatusCoding;
@property (readonly, nonatomic) BOOL hasVerificationStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *verificationStatusCoding;
@property (readonly, nonatomic) BOOL hasSeverityCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *severityCodingCollection;
@property (readonly, nonatomic) BOOL hasBodySitesCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *bodySitesCodingCollections;

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
