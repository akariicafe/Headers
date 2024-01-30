@class NSData, PBDataReader, PBUnknownFields;

@interface GEOOriginalRoute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalDirectionsResponseID;
    NSData *_routeHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _originalRoutePurpose;
    unsigned int _routeIndex;
    struct { unsigned char has_originalRoutePurpose : 1; unsigned char has_routeIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_originalDirectionsResponseID : 1; unsigned char read_routeHandle : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasOriginalRoutePurpose;
@property (nonatomic) int originalRoutePurpose;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (retain, nonatomic) NSData *routeHandle;
@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (retain, nonatomic) NSData *originalDirectionsResponseID;
@property (nonatomic) BOOL hasRouteIndex;
@property (nonatomic) unsigned int routeIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
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
- (id)originalRoutePurposeAsString:(int)a0;
- (int)StringAsOriginalRoutePurpose:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
