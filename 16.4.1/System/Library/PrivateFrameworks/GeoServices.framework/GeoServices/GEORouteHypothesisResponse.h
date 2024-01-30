@class PBDataReader, GEODirectionsResponse, GEOETAResponse;

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEODirectionsResponse *_directionsResponse;
    GEOETAResponse *_etaResponse;
    double _updatedTimeStamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_updatedTimeStamp : 1; unsigned char read_directionsResponse : 1; unsigned char read_etaResponse : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDirectionsResponse;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (readonly, nonatomic) BOOL hasEtaResponse;
@property (retain, nonatomic) GEOETAResponse *etaResponse;
@property (nonatomic) BOOL hasUpdatedTimeStamp;
@property (nonatomic) double updatedTimeStamp;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
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
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
