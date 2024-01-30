@interface ODCurareReportFillerModelHyperparameters : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _hyperparameterIndices;
    struct { float *list; unsigned long long count; unsigned long long size; } _hyperparameterValues;
}

@property (nonatomic) unsigned int versionNumber;
@property (readonly, nonatomic) unsigned long long hyperparameterIndicesCount;
@property (readonly, nonatomic) unsigned int *hyperparameterIndices;
@property (readonly, nonatomic) unsigned long long hyperparameterValuesCount;
@property (readonly, nonatomic) float *hyperparameterValues;

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
- (void)addHyperparameterIndices:(unsigned int)a0;
- (void)addHyperparameterValues:(float)a0;
- (void)clearHyperparameterIndices;
- (unsigned int)hyperparameterIndicesAtIndex:(unsigned long long)a0;
- (void)clearHyperparameterValues;
- (float)hyperparameterValuesAtIndex:(unsigned long long)a0;
- (void)setHyperparameterIndices:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setHyperparameterValues:(float *)a0 count:(unsigned long long)a1;

@end
