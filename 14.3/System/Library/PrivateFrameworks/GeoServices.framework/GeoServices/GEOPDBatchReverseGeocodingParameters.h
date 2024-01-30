@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDBatchReverseGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _additionalPlaceTypes;
    NSMutableArray *_assetLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_additionalPlaceTypes : 1; unsigned char read_assetLocations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *assetLocations;
@property (readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
@property (readonly, nonatomic) int *additionalPlaceTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)assetLocationType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
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
- (void)addAssetLocation:(id)a0;
- (void)addAdditionalPlaceType:(int)a0;
- (unsigned long long)assetLocationsCount;
- (void)clearAssetLocations;
- (id)assetLocationAtIndex:(unsigned long long)a0;
- (void)clearAdditionalPlaceTypes;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)a0;
- (void)setAdditionalPlaceTypes:(int *)a0 count:(unsigned long long)a1;
- (id)additionalPlaceTypesAsString:(int)a0;
- (int)StringAsAdditionalPlaceTypes:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
