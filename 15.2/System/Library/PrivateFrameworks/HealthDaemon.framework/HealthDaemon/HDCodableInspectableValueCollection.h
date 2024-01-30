@class HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableInspectableValueCollection : PBCodable <NSCopying> {
    struct { unsigned char collectionType : 1; } _has;
}

@property (nonatomic) BOOL hasCollectionType;
@property (nonatomic) long long collectionType;
@property (retain, nonatomic) NSMutableArray *collections;
@property (readonly, nonatomic) BOOL hasElementTags;
@property (retain, nonatomic) HDCodableMedicalCodingList *elementTags;

+ (Class)collectionType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)collectionAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)addCollection:(id)a0;
- (unsigned long long)collectionsCount;
- (void)clearCollections;

@end
