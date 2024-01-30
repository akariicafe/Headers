@class GEOLatLng, PBUnknownFields;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    int _cyclingDirection;
    int _drivingDirection;
    unsigned int _significance;
    int _transitDirection;
    int _walkingDirection;
    BOOL _isApproximate;
    struct { unsigned char has_cyclingDirection : 1; unsigned char has_drivingDirection : 1; unsigned char has_significance : 1; unsigned char has_transitDirection : 1; unsigned char has_walkingDirection : 1; unsigned char has_isApproximate : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasIsApproximate;
@property (nonatomic) BOOL isApproximate;
@property (nonatomic) BOOL hasCyclingDirection;
@property (nonatomic) int cyclingDirection;
@property (nonatomic) BOOL hasDrivingDirection;
@property (nonatomic) int drivingDirection;
@property (nonatomic) BOOL hasTransitDirection;
@property (nonatomic) int transitDirection;
@property (nonatomic) BOOL hasWalkingDirection;
@property (nonatomic) int walkingDirection;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) unsigned int significance;
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
- (id)walkingDirectionAsString:(int)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsWalkingDirection:(id)a0;
- (id)dictionaryRepresentation;
- (id)transitDirectionAsString:(int)a0;
- (id)cyclingDirectionAsString:(int)a0;
- (id)drivingDirectionAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsCyclingDirection:(id)a0;
- (int)StringAsTransitDirection:(id)a0;
- (int)StringAsDrivingDirection:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
