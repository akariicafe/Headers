@interface PETDistribution : PBCodable <NSCopying> {
    struct { unsigned char max : 1; unsigned char mean : 1; unsigned char min : 1; unsigned char variance : 1; } _has;
}

@property (nonatomic) BOOL hasMin;
@property (nonatomic) double min;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) double max;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) double mean;
@property (nonatomic) BOOL hasVariance;
@property (nonatomic) double variance;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
