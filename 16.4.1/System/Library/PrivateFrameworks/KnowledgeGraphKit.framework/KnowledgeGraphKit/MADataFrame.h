@class NSString, NSArray, MAFloatMatrix, MAIndexCache;

@interface MADataFrame : NSObject

@property (readonly, nonatomic) MAIndexCache *rowIndexCache;
@property (readonly, nonatomic) MAIndexCache *columnIndexCache;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *rowLabels;
@property (readonly, copy, nonatomic) NSArray *columnLabels;
@property (readonly, copy, nonatomic) MAFloatMatrix *matrix;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)csvString;
- (id)dataFrameByAppendingColumnsOfDataFrame:(id)a0 withName:(id)a1;
- (float)floatAtRowIndex:(long long)a0 columnIndex:(long long)a1;
- (long long)indexOfColumnWithLabel:(id)a0;
- (long long)indexOfRowWithLabel:(id)a0;
- (id)initWithName:(id)a0 rowIndexCache:(id)a1 columnIndexCache:(id)a2 matrix:(id)a3;
- (id)initWithName:(id)a0 rowLabels:(id)a1 columnLabels:(id)a2 matrix:(id)a3;
- (id)numberAtRow:(id)a0 column:(id)a1;

@end
