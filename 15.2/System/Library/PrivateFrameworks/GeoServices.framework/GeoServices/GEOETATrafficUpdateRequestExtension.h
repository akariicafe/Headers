@class GEOTFTrafficSnapshot;

@interface GEOETATrafficUpdateRequestExtension : PBCodable <NSCopying> {
    struct GEOTimepoint { double _currentUserTime; double _time; int _type; struct { unsigned char currentUserTime : 1; unsigned char time : 1; unsigned char type : 1; } _has; } _clientTimepoint;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    BOOL _needServerLatency;
    BOOL _useClientTimepointAsNow;
    BOOL _useLiveTrafficAsFallback;
    struct { unsigned char has_clientTimepoint : 1; unsigned char has_needServerLatency : 1; unsigned char has_useClientTimepointAsNow : 1; unsigned char has_useLiveTrafficAsFallback : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
@property (nonatomic) BOOL hasClientTimepoint;
@property (nonatomic) struct GEOTimepoint { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } clientTimepoint;
@property (nonatomic) BOOL hasUseClientTimepointAsNow;
@property (nonatomic) BOOL useClientTimepointAsNow;
@property (nonatomic) BOOL hasNeedServerLatency;
@property (nonatomic) BOOL needServerLatency;

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
