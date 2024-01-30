@class NSMutableDictionary;

@interface ICDimensionSumCache : NSObject

@property (nonatomic) double sum;
@property (readonly, nonatomic) NSMutableDictionary *dimensions;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double estimateDimension;

- (void).cxx_destruct;
- (id)init;
- (double)dimensionForKey:(id)a0;
- (id)initWithKeys:(id)a0 andEstimateDimension:(double)a1;
- (void)setDimension:(double)a0 forKey:(id)a1;
- (void)removeDimensionForKey:(id)a0;

@end
