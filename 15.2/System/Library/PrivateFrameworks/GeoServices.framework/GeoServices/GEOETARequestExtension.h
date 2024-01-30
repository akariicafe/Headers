@class GEOTFTrafficSnapshot;

@interface GEOETARequestExtension : PBCodable <NSCopying> {
    GEOTFTrafficSnapshot *_trafficSnapshot;
    BOOL _needServerLatency;
    BOOL _useLiveTrafficAsFallback;
    struct { unsigned char has_needServerLatency : 1; unsigned char has_useLiveTrafficAsFallback : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL useLiveTrafficAsFallback;
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
