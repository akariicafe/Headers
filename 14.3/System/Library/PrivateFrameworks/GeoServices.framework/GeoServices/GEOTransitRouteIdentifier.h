@class PBDataReader, NSUUID, NSData, PBUnknownFields;

@interface GEOTransitRouteIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_clientRouteHandle;
    NSData *_serverRouteHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_clientRouteHandle : 1; unsigned char read_serverRouteHandle : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSUUID *clientRouteID;
@property (readonly, nonatomic) BOOL hasServerRouteHandle;
@property (retain, nonatomic) NSData *serverRouteHandle;
@property (readonly, nonatomic) BOOL hasClientRouteHandle;
@property (retain, nonatomic) NSData *clientRouteHandle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)routeIdentiferForComposedRoute:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
