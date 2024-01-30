@class PBUnknownFields, GEORouteIncident;

@interface GEOETARouteIncident : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEORouteIncident *_routeIncident;
    unsigned int _distanceFromStartCm;
    struct { unsigned char has_distanceFromStartCm : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRouteIncident;
@property (retain, nonatomic) GEORouteIncident *routeIncident;
@property (nonatomic) BOOL hasDistanceFromStartCm;
@property (nonatomic) unsigned int distanceFromStartCm;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
