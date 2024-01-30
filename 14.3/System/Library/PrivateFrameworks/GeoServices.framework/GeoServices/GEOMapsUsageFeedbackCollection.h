@class PBDataReader, GEOPlaceActionDetails, GEORouteDetails, GEOCarInfo, GEOMapRegion, NSString, GEOMapsServerMetadata;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    GEOCarInfo *_carInfo;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    GEORouteDetails *_routeDetails;
    GEOMapsServerMetadata *_serverMetadata;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _actionType;
    int _locationBucket;
    int _sequenceNumber;
    int _uiTarget;
    struct { unsigned char has_sessionID : 1; unsigned char has_sessionRelativeTimestamp : 1; unsigned char has_zoomLevel : 1; unsigned char has_actionType : 1; unsigned char has_locationBucket : 1; unsigned char has_sequenceNumber : 1; unsigned char has_uiTarget : 1; unsigned char read_carInfo : 1; unsigned char read_mapRegion : 1; unsigned char read_placeActionDetails : 1; unsigned char read_providerId : 1; unsigned char read_routeDetails : 1; unsigned char read_serverMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasPlaceActionDetails;
@property (retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property (readonly, nonatomic) BOOL hasCarInfo;
@property (retain, nonatomic) GEOCarInfo *carInfo;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) int sequenceNumber;
@property (readonly, nonatomic) BOOL hasRouteDetails;
@property (retain, nonatomic) GEORouteDetails *routeDetails;
@property (readonly, nonatomic) BOOL hasProviderId;
@property (retain, nonatomic) NSString *providerId;
@property (readonly, nonatomic) BOOL hasServerMetadata;
@property (retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) BOOL hasLocationBucket;
@property (nonatomic) int locationBucket;
@property (nonatomic) BOOL hasUiTarget;
@property (nonatomic) int uiTarget;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)locationBucketAsString:(int)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (int)StringAsLocationBucket:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)actionTypeAsString:(int)a0;
- (int)StringAsActionType:(id)a0;
- (id)uiTargetAsString:(int)a0;
- (int)StringAsUiTarget:(id)a0;

@end
