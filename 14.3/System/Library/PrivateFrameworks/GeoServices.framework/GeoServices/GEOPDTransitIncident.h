@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitIncident : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_transitIncidents;
}

@property (retain, nonatomic) NSMutableArray *transitIncidents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)transitIncidentType;
+ (id)transitIncidentsForPlaceData:(id)a0 hasTransitIncidentComponent:(BOOL *)a1;
+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addTransitIncident:(id)a0;
- (unsigned long long)transitIncidentsCount;
- (void)clearTransitIncidents;
- (id)transitIncidentAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
