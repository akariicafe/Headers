@class NSString, GEOLocation, GEOPlaceSearchRequest, GEOMapRegion, PBDataReader;

@interface GEOMapQuery : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    GEOMapRegion *_mapRegion;
    GEOPlaceSearchRequest *_placeSearchRequest;
    NSString *_query;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _clientImgFmt;
    int _clientImgMaxHeight;
    int _clientImgMaxWidth;
    int _mapCenterX;
    int _mapCenterY;
    int _mapSpanX;
    int _mapSpanY;
    int _requestType;
    int _tilesizeX;
    int _tilesizeY;
    int _zoomlevel;
    struct { unsigned char has_sessionID : 1; unsigned char has_clientImgFmt : 1; unsigned char has_clientImgMaxHeight : 1; unsigned char has_clientImgMaxWidth : 1; unsigned char has_mapCenterX : 1; unsigned char has_mapCenterY : 1; unsigned char has_mapSpanX : 1; unsigned char has_mapSpanY : 1; unsigned char has_requestType : 1; unsigned char has_tilesizeX : 1; unsigned char has_tilesizeY : 1; unsigned char has_zoomlevel : 1; unsigned char read_mapRegion : 1; unsigned char read_placeSearchRequest : 1; unsigned char read_query : 1; unsigned char read_userLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasMapCenterX;
@property (nonatomic) int mapCenterX;
@property (nonatomic) BOOL hasMapCenterY;
@property (nonatomic) int mapCenterY;
@property (nonatomic) BOOL hasMapSpanX;
@property (nonatomic) int mapSpanX;
@property (nonatomic) BOOL hasMapSpanY;
@property (nonatomic) int mapSpanY;
@property (nonatomic) BOOL hasZoomlevel;
@property (nonatomic) int zoomlevel;
@property (nonatomic) BOOL hasClientImgFmt;
@property (nonatomic) int clientImgFmt;
@property (nonatomic) BOOL hasTilesizeX;
@property (nonatomic) int tilesizeX;
@property (nonatomic) BOOL hasTilesizeY;
@property (nonatomic) int tilesizeY;
@property (nonatomic) BOOL hasClientImgMaxWidth;
@property (nonatomic) int clientImgMaxWidth;
@property (nonatomic) BOOL hasClientImgMaxHeight;
@property (nonatomic) int clientImgMaxHeight;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (retain, nonatomic) GEOLocation *userLocation;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)requestTypeAsString:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (int)StringAsRequestType:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)clientImgFmtAsString:(int)a0;
- (int)StringAsClientImgFmt:(id)a0;

@end
