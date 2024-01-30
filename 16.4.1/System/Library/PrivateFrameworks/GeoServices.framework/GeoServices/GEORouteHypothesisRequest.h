@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBCodable <NSCopying> {
    double _arrivalDate;
    GEOMapItemStorage *_destinationLocation;
    double _expirationDate;
    int _transportType;
    struct { unsigned char has_arrivalDate : 1; unsigned char has_expirationDate : 1; unsigned char has_transportType : 1; } _flags;
}

@property (nonatomic) BOOL hasArrivalDate;
@property (nonatomic) double arrivalDate;
@property (readonly, nonatomic) BOOL hasDestinationLocation;
@property (retain, nonatomic) GEOMapItemStorage *destinationLocation;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;

+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (int)StringAsTransportType:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)transportTypeAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
