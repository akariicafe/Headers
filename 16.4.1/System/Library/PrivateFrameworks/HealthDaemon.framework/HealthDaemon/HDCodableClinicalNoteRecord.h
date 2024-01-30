@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableMedicalCodingListList, HDCodableStringList, HDCodableMedicalRecord;

@interface HDCodableClinicalNoteRecord : PBCodable <HDDecoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasDocumentTypeCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *documentTypeCodingCollection;
@property (readonly, nonatomic) BOOL hasNoteCreationDate;
@property (retain, nonatomic) NSData *noteCreationDate;
@property (readonly, nonatomic) BOOL hasCategoriesCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *categoriesCodingCollections;
@property (readonly, nonatomic) BOOL hasRelevantStartDate;
@property (retain, nonatomic) NSData *relevantStartDate;
@property (readonly, nonatomic) BOOL hasRelevantEndDate;
@property (retain, nonatomic) NSData *relevantEndDate;
@property (readonly, nonatomic) BOOL hasAuthors;
@property (retain, nonatomic) HDCodableStringList *authors;

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
