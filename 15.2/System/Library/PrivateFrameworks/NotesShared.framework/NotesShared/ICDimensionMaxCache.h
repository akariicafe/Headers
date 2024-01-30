@class NSMutableDictionary, NSMutableArray;

@interface ICDimensionMaxCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *dimensions;
@property (readonly, nonatomic) NSMutableArray *sortedDimensions;
@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) unsigned long long count;

- (id)initWithComparator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (double)dimensionForKey:(id)a0;
- (void)setDimension:(double)a0 forKey:(id)a1;
- (void)removeDimensionForKey:(id)a0;

@end
