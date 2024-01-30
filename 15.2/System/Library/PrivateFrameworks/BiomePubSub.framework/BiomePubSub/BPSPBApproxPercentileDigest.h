@interface BPSPBApproxPercentileDigest : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _centroidMeans;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _centroidWeights;
    struct { unsigned char bufferMultiplier : 1; unsigned char centroidCount : 1; unsigned char max : 1; unsigned char min : 1; } _has;
}

@property (nonatomic) BOOL hasMin;
@property (nonatomic) float min;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) float max;
@property (nonatomic) BOOL hasCentroidCount;
@property (nonatomic) unsigned int centroidCount;
@property (nonatomic) BOOL hasBufferMultiplier;
@property (nonatomic) unsigned int bufferMultiplier;
@property (readonly, nonatomic) unsigned long long centroidMeansCount;
@property (readonly, nonatomic) float *centroidMeans;
@property (readonly, nonatomic) unsigned long long centroidWeightsCount;
@property (readonly, nonatomic) unsigned int *centroidWeights;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (float)centroidMeansAtIndex:(unsigned long long)a0;
- (unsigned int)centroidWeightsAtIndex:(unsigned long long)a0;
- (void)addCentroidMeans:(float)a0;
- (void)addCentroidWeights:(unsigned int)a0;
- (void)clearCentroidMeans;
- (void)clearCentroidWeights;
- (void)setCentroidMeans:(float *)a0 count:(unsigned long long)a1;
- (void)setCentroidWeights:(unsigned int *)a0 count:(unsigned long long)a1;

@end
