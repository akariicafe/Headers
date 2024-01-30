@class GEOPDComponent, PBUnknownFields;

@interface GEOPDPlaceCollectionLookupResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDComponent *_collectionComponent;
}

@property (readonly, nonatomic) BOOL hasCollectionComponent;
@property (retain, nonatomic) GEOPDComponent *collectionComponent;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

@end
