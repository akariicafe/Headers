@class NSDictionary, NSIndexSet;

@interface TSCHDownsampleData : NSObject

@property (readonly, copy, nonatomic) NSDictionary *indexToPositionMap;
@property (readonly, copy, nonatomic) NSDictionary *positionToIndexMap;
@property (readonly, copy, nonatomic) NSIndexSet *indexSet;

+ (id)emptyData;
+ (id)dataWithIndexSet:(id)a0;
+ (id)dataWithIndexSet:(id)a0 indexToPositionMap:(id)a1 positionToIndexMap:(id)a2;

- (void).cxx_destruct;
- (id)initWithIndexSet:(id)a0;
- (unsigned long long)indexAtPosition:(unsigned long long)a0;
- (id)initWithIndexSet:(id)a0 indexToPositionMap:(id)a1 positionToIndexMap:(id)a2;
- (unsigned long long)positionOfIndex:(unsigned long long)a0;

@end
