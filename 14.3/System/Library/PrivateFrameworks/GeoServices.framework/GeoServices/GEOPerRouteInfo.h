@interface GEOPerRouteInfo : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _routeUuid;
    unsigned long long _etaServiceTravelTime;
    unsigned long long _originalTravelTime;
    struct { unsigned char has_routeUuid : 1; unsigned char has_etaServiceTravelTime : 1; unsigned char has_originalTravelTime : 1; } _flags;
}

@property (nonatomic) BOOL hasOriginalTravelTime;
@property (nonatomic) unsigned long long originalTravelTime;
@property (nonatomic) BOOL hasEtaServiceTravelTime;
@property (nonatomic) unsigned long long etaServiceTravelTime;
@property (nonatomic) BOOL hasRouteUuid;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } routeUuid;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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

@end
