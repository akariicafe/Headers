@interface GEOTrafficProbeFlow : PBCodable <NSCopying> {
    unsigned int _aggregationCount;
    unsigned int _aggregationWindowSeconds;
    unsigned int _partialTraversalAggregationCount;
    struct { unsigned char has_aggregationCount : 1; unsigned char has_aggregationWindowSeconds : 1; unsigned char has_partialTraversalAggregationCount : 1; } _flags;
}

@property (nonatomic) BOOL hasAggregationCount;
@property (nonatomic) unsigned int aggregationCount;
@property (nonatomic) BOOL hasAggregationWindowSeconds;
@property (nonatomic) unsigned int aggregationWindowSeconds;
@property (nonatomic) BOOL hasPartialTraversalAggregationCount;
@property (nonatomic) unsigned int partialTraversalAggregationCount;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
