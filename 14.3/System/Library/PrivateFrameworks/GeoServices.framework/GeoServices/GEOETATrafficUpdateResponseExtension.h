@class GEOETAServiceResponseSummary;

@interface GEOETATrafficUpdateResponseExtension : PBCodable <NSCopying> {
    unsigned long long _debugServerLatencyMs;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    struct { unsigned char has_debugServerLatencyMs : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEtaServiceSummary;
@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic) BOOL hasDebugServerLatencyMs;
@property (nonatomic) unsigned long long debugServerLatencyMs;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (id)initWithDictionary:(id)a0;

@end
