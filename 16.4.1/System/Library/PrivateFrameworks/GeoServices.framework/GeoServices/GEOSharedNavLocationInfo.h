@class GEOLatLng, PBUnknownFields;

@interface GEOSharedNavLocationInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_coordinate;
    unsigned int _matchedCoordinateIndex;
    float _matchedCoordinateOffset;
    struct { unsigned char has_matchedCoordinateIndex : 1; unsigned char has_matchedCoordinateOffset : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) BOOL hasMatchedCoordinateIndex;
@property (nonatomic) unsigned int matchedCoordinateIndex;
@property (nonatomic) BOOL hasMatchedCoordinateOffset;
@property (nonatomic) float matchedCoordinateOffset;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
