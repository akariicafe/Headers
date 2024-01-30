@class PBDataReader, GEOPDPlace, NSMutableArray, PBUnknownFields;

@interface GEOPDBatchReverseGeocodeResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_additionalPlaces;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_additionalPlaces : 1; unsigned char read_place : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) NSMutableArray *additionalPlaces;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)additionalPlaceType;
+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)additionalPlacesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addAdditionalPlace:(id)a0;
- (void)clearAdditionalPlaces;
- (id)additionalPlaceAtIndex:(unsigned long long)a0;
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
