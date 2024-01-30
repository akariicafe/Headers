@class NSMutableArray, PBUnknownFields;

@interface GEOPDTerritoryLookupParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_locations;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)locationType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addLocation:(id)a0;
- (void)clearLocations;
- (void).cxx_destruct;
- (id)locationAtIndex:(unsigned long long)a0;
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
- (unsigned long long)locationsCount;

@end
