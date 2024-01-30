@class NSString, GEOURLRouteHandle, GEOURLCamera, GEOURLCenterSpan, GEOURLTimePoint, PBDataReader;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {
    PBDataReader *_reader;
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    GEOURLTimePoint *_timePoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _mapType;
    int _transportType;
    int _userTrackingMode;
    BOOL _connectedToCar;
    BOOL _enableTraffic;
    struct { unsigned char has_mapType : 1; unsigned char has_transportType : 1; unsigned char has_userTrackingMode : 1; unsigned char has_connectedToCar : 1; unsigned char has_enableTraffic : 1; unsigned char read_camera : 1; unsigned char read_centerSpan : 1; unsigned char read_referralIdentifier : 1; unsigned char read_routeHandle : 1; unsigned char read_timePoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasEnableTraffic;
@property (nonatomic) BOOL enableTraffic;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasCenterSpan;
@property (retain, nonatomic) GEOURLCenterSpan *centerSpan;
@property (readonly, nonatomic) BOOL hasCamera;
@property (retain, nonatomic) GEOURLCamera *camera;
@property (readonly, nonatomic) BOOL hasReferralIdentifier;
@property (retain, nonatomic) NSString *referralIdentifier;
@property (nonatomic) BOOL hasUserTrackingMode;
@property (nonatomic) int userTrackingMode;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (readonly, nonatomic) BOOL hasTimePoint;
@property (retain, nonatomic) GEOURLTimePoint *timePoint;
@property (nonatomic) BOOL hasConnectedToCar;
@property (nonatomic) BOOL connectedToCar;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (int)StringAsTransportType:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)transportTypeAsString:(int)a0;
- (int)StringAsMapType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (id)urlRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (id)mapTypeAsString:(int)a0;
- (int)StringAsUserTrackingMode:(id)a0;
- (id)initWithUrlRepresentation:(id)a0;
- (id)userTrackingModeAsString:(int)a0;

@end
