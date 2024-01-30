@class NSMutableArray, PBUnknownFields;

@interface GEOPDCollectionSuggestionResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
}

@property (retain, nonatomic) NSMutableArray *collectionIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)collectionIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)collectionIdsCount;
- (void)addCollectionId:(id)a0;
- (void)clearCollectionIds;
- (id)collectionIdAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
