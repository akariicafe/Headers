@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPDirectionsSearch : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char navigationInterrupted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRouteRequestStorage;
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic) BOOL hasNavigationInterrupted;
@property (nonatomic) BOOL navigationInterrupted;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
