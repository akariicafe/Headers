@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _indices;
    struct { float *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char length : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long indicesCount;
@property (readonly, nonatomic) unsigned long long *indices;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float *values;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) unsigned long long length;

+ (id)sparseFloatVectorFromModelWeights:(id)a0;
+ (id)sparseFloatVectorFromSparseVector:(id)a0;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (float)valueAtIndex:(unsigned long long)a0;
- (void)addValues:(float)a0;
- (float)valuesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearValues;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)clearIndices;
- (void)addIndices:(unsigned long long)a0;
- (unsigned long long)indicesAtIndex:(unsigned long long)a0;
- (void)setIndices:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setValues:(float *)a0 count:(unsigned long long)a1;

@end
