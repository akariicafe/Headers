@class PBDataReader, GEOWaypointLocation, GEOWaypointID, GEOWaypointPlace, PBUnknownFields;

@interface GEOWaypointTyped : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOWaypointID *_waypointId;
    GEOWaypointLocation *_waypointLocation;
    GEOWaypointPlace *_waypointPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _waypointType;
    BOOL _isCurrentLocation;
    BOOL _isLocationOfInterest;
    struct { unsigned char has_waypointType : 1; unsigned char has_isCurrentLocation : 1; unsigned char has_isLocationOfInterest : 1; unsigned char read_unknownFields : 1; unsigned char read_waypointId : 1; unsigned char read_waypointLocation : 1; unsigned char read_waypointPlace : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasWaypointType;
@property (nonatomic) int waypointType;
@property (readonly, nonatomic) BOOL hasWaypointId;
@property (retain, nonatomic) GEOWaypointID *waypointId;
@property (readonly, nonatomic) BOOL hasWaypointPlace;
@property (retain, nonatomic) GEOWaypointPlace *waypointPlace;
@property (readonly, nonatomic) BOOL hasWaypointLocation;
@property (retain, nonatomic) GEOWaypointLocation *waypointLocation;
@property (nonatomic) BOOL hasIsCurrentLocation;
@property (nonatomic) BOOL isCurrentLocation;
@property (nonatomic) BOOL hasIsLocationOfInterest;
@property (nonatomic) BOOL isLocationOfInterest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (void)clearUnknownFields:(BOOL)a0;
- (id)locationForWaypoint;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearLocations;
- (id)waypointTypeAsString:(int)a0;
- (int)StringAsWaypointType:(id)a0;
- (id)dictionaryRepresentation;

@end
