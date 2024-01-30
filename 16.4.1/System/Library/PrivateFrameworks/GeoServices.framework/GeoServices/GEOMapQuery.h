@class NSString, GEOPlaceSearchRequest, GEOLocation, GEOMapRegion, PBDataReader;

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

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
