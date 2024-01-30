@interface AWDProactiveModelFittingSparseFloatMatrix : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _columnIndices;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _rowIndices;
    struct { float *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char columnLength : 1; unsigned char rowLength : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long columnIndicesCount;
@property (readonly, nonatomic) unsigned long long *columnIndices;
@property (nonatomic) BOOL hasColumnLength;
@property (nonatomic) unsigned long long columnLength;
@property (readonly, nonatomic) unsigned long long rowIndicesCount;
@property (readonly, nonatomic) unsigned long long *rowIndices;
@property (nonatomic) BOOL hasRowLength;
@property (nonatomic) unsigned long long rowLength;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float *values;

+ (id)sparseFloatMatrixFromDenseMatrix:(id)a0;
+ (id)sparseFloatMatrixFromSparseMatrix:(id)a0;

- (BOOL)readFrom:(id)a0;
- (id)description;
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
- (float)valueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (void)setValues:(float *)a0 count:(unsigned long long)a1;
- (void)clearColumnIndices;
- (void)addColumnIndices:(unsigned long long)a0;
- (unsigned long long)columnIndicesAtIndex:(unsigned long long)a0;
- (void)setColumnIndices:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearRowIndices;
- (void)addRowIndices:(unsigned long long)a0;
- (unsigned long long)rowIndicesAtIndex:(unsigned long long)a0;
- (void)setRowIndices:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
