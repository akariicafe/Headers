@class PBUnknownFields, GEORouteTrafficDetail;

@interface GEOPDETA : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEORouteTrafficDetail *_routeTrafficDetail;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _licensePlateRestrictionImpact;
    unsigned int _time;
    int _transportType;
    struct { unsigned char has_distance : 1; unsigned char has_historicTravelTime : 1; unsigned char has_licensePlateRestrictionImpact : 1; unsigned char has_time : 1; unsigned char has_transportType : 1; } _flags;
}

@property (nonatomic) BOOL hasTime;
@property (nonatomic) unsigned int time;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (readonly, nonatomic) BOOL hasRouteTrafficDetail;
@property (retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (nonatomic) BOOL hasLicensePlateRestrictionImpact;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)licensePlateRestrictionImpactAsString:(int)a0;
- (int)StringAsLicensePlateRestrictionImpact:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsTransportType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)transportTypeAsString:(int)a0;

@end
