@class NSMutableArray, PBUnknownFields;

@interface GEOPDPlaceGlobalCommonResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_placeContextMetadatas;
}

@property (retain, nonatomic) NSMutableArray *placeContextMetadatas;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)placeContextMetadataType;
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
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addPlaceContextMetadata:(id)a0;
- (unsigned long long)placeContextMetadatasCount;
- (void)clearPlaceContextMetadatas;
- (id)placeContextMetadataAtIndex:(unsigned long long)a0;

@end
