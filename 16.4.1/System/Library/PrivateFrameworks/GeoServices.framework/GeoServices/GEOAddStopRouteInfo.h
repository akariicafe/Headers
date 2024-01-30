@class PBDataReader, NSData, GEORouteAttributes, PBUnknownFields;

@interface GEOAddStopRouteInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalWaypointRouteRepresentation;
    GEORouteAttributes *_routeAttributes;
    NSData *_routeId;
    NSData *_sessionState;
    NSData *_zilchData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_originalWaypointRouteRepresentation : 1; unsigned char read_routeAttributes : 1; unsigned char read_routeId : 1; unsigned char read_sessionState : 1; unsigned char read_zilchData : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginalWaypointRouteRepresentation;
@property (retain, nonatomic) NSData *originalWaypointRouteRepresentation;
@property (readonly, nonatomic) BOOL hasZilchData;
@property (retain, nonatomic) NSData *zilchData;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) BOOL hasRouteId;
@property (retain, nonatomic) NSData *routeId;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
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
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
