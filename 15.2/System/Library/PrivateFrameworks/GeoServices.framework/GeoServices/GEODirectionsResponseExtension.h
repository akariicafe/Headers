@class GEOETAServiceResponseSummary;

@interface GEODirectionsResponseExtension : PBCodable <NSCopying> {
    GEOETAServiceResponseSummary *_etaServiceSummary;
}

@property (readonly, nonatomic) BOOL hasEtaServiceSummary;
@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;

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
