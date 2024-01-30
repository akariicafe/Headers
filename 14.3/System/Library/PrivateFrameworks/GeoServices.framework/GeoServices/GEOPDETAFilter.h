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
    BOOL _includeHistoricTravelTime;
    BOOL _includeRouteTrafficDetail;
    struct { unsigned char has_includeHistoricTravelTime : 1; unsigned char has_includeRouteTrafficDetail : 1; unsigned char read_unknownFields : 1; unsigned char read_transportTypes : 1; unsigned char read_automobileOptions : 1; unsigned char read_clientCapabilities : 1; unsigned char read_cyclingOptions : 1; unsigned char read_transitOptions : 1; unsigned char read_walkingOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long transportTypesCount;
@property (readonly, nonatomic) int *transportTypes;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (nonatomic) BOOL hasIncludeRouteTrafficDetail;
@property (nonatomic) BOOL includeRouteTrafficDetail;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)_etaFilterWithTransportTypes:(int *)a0 transportTypesCount:(unsigned long long)a1 automobileOptions:(id)a2 transitOptions:(id)a3 walkingOptions:(id)a4 cyclingOptions:(id)a5;
+ (id)etaFilterForTraits:(id)a0;
+ (id)etaFilterForRouteAttributes:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addTransportType:(int)a0;
- (void)clearTransportTypes;
- (int)transportTypeAtIndex:(unsigned long long)a0;
- (id)transportTypesAsString:(int)a0;
- (int)StringAsTransportTypes:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)setTransportTypes:(int *)a0 count:(unsigned long long)a1;

@end
