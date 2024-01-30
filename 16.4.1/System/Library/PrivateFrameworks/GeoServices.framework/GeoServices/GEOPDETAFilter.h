@class PBDataReader, GEOAutomobileOptions, GEOClientCapabilities, GEOCyclingOptions, GEOWalkingOptions, GEOTransitOptions, PBUnknownFields;

@interface GEOPDETAFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _transportTypes;
    GEOAutomobileOptions *_automobileOptions;
    GEOClientCapabilities *_clientCapabilities;
    GEOCyclingOptions *_cyclingOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _includeEtaRouteIncidents;
    BOOL _includeHistoricTravelTime;
    BOOL _includeRouteTrafficDetail;
    struct { unsigned char has_includeEtaRouteIncidents : 1; unsigned char has_includeHistoricTravelTime : 1; unsigned char has_includeRouteTrafficDetail : 1; unsigned char read_unknownFields : 1; unsigned char read_transportTypes : 1; unsigned char read_automobileOptions : 1; unsigned char read_clientCapabilities : 1; unsigned char read_cyclingOptions : 1; unsigned char read_transitOptions : 1; unsigned char read_walkingOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)_etaFilterWithTransportTypes:(int *)a0 transportTypesCount:(unsigned long long)a1 automobileOptions:(id)a2 transitOptions:(id)a3 walkingOptions:(id)a4 cyclingOptions:(id)a5;
+ (id)etaFilterForRouteAttributes:(id)a0;
+ (id)etaFilterForTraits:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
