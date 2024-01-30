@interface GEOVLFARState : PBCodable <NSCopying> {
    int _geoTrackingStateReason;
    int _geoTrackingState;
    unsigned int _relativeTimestampMs;
    struct { unsigned char has_geoTrackingStateReason : 1; unsigned char has_geoTrackingState : 1; unsigned char has_relativeTimestampMs : 1; } _flags;
}

@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) BOOL hasGeoTrackingState;
@property (nonatomic) int geoTrackingState;
@property (nonatomic) BOOL hasGeoTrackingStateReason;
@property (nonatomic) int geoTrackingStateReason;

+ (BOOL)isValid:(id)a0;

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
- (id)geoTrackingStateReasonAsString:(int)a0;
- (int)StringAsGeoTrackingStateReason:(id)a0;
- (int)StringAsGeoTrackingState:(id)a0;
- (id)geoTrackingStateAsString:(int)a0;

@end
