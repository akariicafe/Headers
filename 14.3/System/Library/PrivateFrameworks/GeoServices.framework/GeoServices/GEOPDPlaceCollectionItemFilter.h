@class NSMutableArray, PBUnknownFields;

@interface GEOPDPlaceCollectionItemFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_itemIds;
}

@property (retain, nonatomic) NSMutableArray *itemIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)itemIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (unsigned long long)itemIdsCount;
- (void)clearItemIds;
- (id)itemIdAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addItemId:(id)a0;

@end
