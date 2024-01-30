@interface GEOPerRouteInfo : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _routeUuid;
    unsigned long long _etaServiceTravelTime;
    unsigned long long _originalTravelTime;
    struct { unsigned char has_routeUuid : 1; unsigned char has_etaServiceTravelTime : 1; unsigned char has_originalTravelTime : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
