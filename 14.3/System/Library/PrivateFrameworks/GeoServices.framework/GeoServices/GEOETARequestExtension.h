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
