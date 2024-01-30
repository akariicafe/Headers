@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _columnIndices;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _rowIndices;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char bucketSize : 1; unsigned char columnLength : 1; unsigned char minValue : 1; unsigned char rowLength : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long columnIndicesCount;
@property (readonly, nonatomic) unsigned int *columnIndices;
@property (nonatomic) BOOL hasColumnLength;
@property (nonatomic) unsigned int columnLength;
@property (readonly, nonatomic) unsigned long long rowIndicesCount;
@property (readonly, nonatomic) unsigned int *rowIndices;
@property (nonatomic) BOOL hasRowLength;
@property (nonatomic) unsigned int rowLength;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) unsigned int *values;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) BOOL hasBucketSize;
@property (nonatomic) float bucketSize;

+ (id)quantizedSparseMatrixFromSparseMatrix:(id)a0 numberOfBuckets:(unsigned long long)a1;

- (void)clearValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)addValues:(unsigned int)a0;
- (unsigned int)valuesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)setValues:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearColumnIndices;
- (void)addColumnIndices:(unsigned int)a0;
- (unsigned int)columnIndicesAtIndex:(unsigned long long)a0;
- (void)setColumnIndices:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearRowIndices;
- (void)addRowIndices:(unsigned int)a0;
- (unsigned int)rowIndicesAtIndex:(unsigned long long)a0;
- (void)setRowIndices:(unsigned int *)a0 count:(unsigned long long)a1;
- (float)originalValueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;

@end
