@class NSDate, NSString, PBDataReader, GEOPBTransitShield, PBUnknownFields, GEOPBTransitArtwork, GEOLatLng, GEOStyleAttributes;
@protocol GEOTransitArtworkDataSource;

@interface GEOPBTransitVehiclePosition : PBCodable <GEOTransitVehiclePosition, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSString *_color;
    NSString *_directionName;
    NSString *_headsign;
    GEOLatLng *_latLng;
    GEOPBTransitShield *_modeShield;
    GEOStyleAttributes *_styleAttributes;
    unsigned long long _time;
    unsigned long long _tripId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _bearing;
    float _speed;
    struct { unsigned char has_time : 1; unsigned char has_tripId : 1; unsigned char has_bearing : 1; unsigned char has_speed : 1; unsigned char read_unknownFields : 1; unsigned char read_artwork : 1; unsigned char read_color : 1; unsigned char read_directionName : 1; unsigned char read_headsign : 1; unsigned char read_latLng : 1; unsigned char read_modeShield : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long tripID;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *direction;
@property (readonly, copy, nonatomic) NSString *headsign;
@property (readonly, copy, nonatomic) NSString *colorHexString;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTripId;
@property (nonatomic) unsigned long long tripId;
@property (readonly, nonatomic) BOOL hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) BOOL hasTime;
@property (nonatomic) unsigned long long time;
@property (nonatomic) BOOL hasBearing;
@property (nonatomic) float bearing;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) float speed;
@property (readonly, nonatomic) BOOL hasDirectionName;
@property (retain, nonatomic) NSString *directionName;
@property (readonly, nonatomic) BOOL hasHeadsign;
@property (retain, nonatomic) NSString *headsign;
@property (readonly, nonatomic) BOOL hasModeShield;
@property (retain, nonatomic) GEOPBTransitShield *modeShield;
@property (readonly, nonatomic) BOOL hasColor;
@property (retain, nonatomic) NSString *color;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)transitVehiclePositionForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)dictionaryRepresentation;

@end
