@class PBDataReader, GEOURLRouteHandle, NSMutableArray, PBUnknownFields;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOURLRouteHandle *_routeHandle;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transportType;
    struct { unsigned char has_transportType : 1; unsigned char read_unknownFields : 1; unsigned char read_routeHandle : 1; unsigned char read_waypoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *waypoints;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)waypointsType;
+ (BOOL)isValid:(id)a0;

- (unsigned long long)waypointsCount;
- (void)clearWaypoints;
- (id)waypointsAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)transportTypeAsString:(int)a0;
- (int)StringAsTransportType:(id)a0;
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
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)addWaypoints:(id)a0;

@end
