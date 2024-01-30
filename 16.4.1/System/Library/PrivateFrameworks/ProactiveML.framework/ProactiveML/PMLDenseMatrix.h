@class PMLDenseVector;

@interface PMLDenseMatrix : NSObject {
    PMLDenseVector *_data;
}

@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) unsigned long long numberOfColumns;

+ (id)denseMatrixFromData:(id)a0 numberOfRows:(unsigned long long)a1 numberOfColumns:(unsigned long long)a2;
+ (id)denseMatrixFromNumbers:(id)a0;

- (const float *)values;
- (void).cxx_destruct;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;
- (id)initWithData:(id)a0 numberOfRows:(unsigned long long)a1 numberOfColumns:(unsigned long long)a2;

@end
