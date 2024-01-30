@class PETAggregationKey, PETDistribution;

@interface PETAggregatedMessage : PBCodable <NSCopying> {
    struct { unsigned char count : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) PETAggregationKey *key;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) BOOL hasDistribution;
@property (retain, nonatomic) PETDistribution *distribution;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
