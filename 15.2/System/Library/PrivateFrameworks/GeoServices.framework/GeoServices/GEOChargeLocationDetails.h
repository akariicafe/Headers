@interface GEOChargeLocationDetails : PBCodable <NSCopying> {
    BOOL _arrivedAtChargeLocation;
    BOOL _routePaused;
    BOOL _routeResumed;
    struct { unsigned char has_arrivedAtChargeLocation : 1; unsigned char has_routePaused : 1; unsigned char has_routeResumed : 1; } _flags;
}

@property (nonatomic) BOOL hasArrivedAtChargeLocation;
@property (nonatomic) BOOL arrivedAtChargeLocation;
@property (nonatomic) BOOL hasRoutePaused;
@property (nonatomic) BOOL routePaused;
@property (nonatomic) BOOL hasRouteResumed;
@property (nonatomic) BOOL routeResumed;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
