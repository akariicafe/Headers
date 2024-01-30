@class GEOLatLng, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventPOIBusynessData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _altitude;
    double _horizontalAccuracy;
    GEOLatLng *_location;
    NSMutableArray *_poiPredictions;
    double _timestamp;
    double _verticalAccuracy;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_altitude : 1; unsigned char has_horizontalAccuracy : 1; unsigned char has_timestamp : 1; unsigned char has_verticalAccuracy : 1; unsigned char read_location : 1; unsigned char read_poiPredictions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (retain, nonatomic) NSMutableArray *poiPredictions;

+ (BOOL)isValid:(id)a0;
+ (Class)poiPredictionsType;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addPoiPredictions:(id)a0;
- (unsigned long long)poiPredictionsCount;
- (void)clearPoiPredictions;
- (id)poiPredictionsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
