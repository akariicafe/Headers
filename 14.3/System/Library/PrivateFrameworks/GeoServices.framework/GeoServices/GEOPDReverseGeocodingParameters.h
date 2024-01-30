@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_extendedLocations;
    NSMutableArray *_locations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeTypeLimit;
    BOOL _preserveOriginalLocation;
    struct { unsigned char has_placeTypeLimit : 1; unsigned char has_preserveOriginalLocation : 1; unsigned char read_unknownFields : 1; unsigned char read_extendedLocations : 1; unsigned char read_locations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (nonatomic) BOOL hasPlaceTypeLimit;
@property (nonatomic) int placeTypeLimit;
@property (nonatomic) BOOL hasPreserveOriginalLocation;
@property (nonatomic) BOOL preserveOriginalLocation;
@property (retain, nonatomic) NSMutableArray *extendedLocations;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)locationType;
+ (Class)extendedLocationType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (void)addLocation:(id)a0;
- (void)clearLocations;
- (id)init;
- (void).cxx_destruct;
- (void)clearExtendedLocations;
- (id)locationAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addExtendedLocation:(id)a0;
- (int)StringAsPlaceTypeLimit:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)placeTypeLimitAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)extendedLocationAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)locationsCount;
- (unsigned long long)extendedLocationsCount;

@end
