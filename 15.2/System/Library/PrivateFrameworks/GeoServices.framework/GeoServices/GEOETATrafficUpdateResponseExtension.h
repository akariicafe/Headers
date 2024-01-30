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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
