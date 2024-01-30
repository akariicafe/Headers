@class NSMutableIndexSet;

@interface _UIKBRTMutableOrderIndexSet : NSObject

@property (readonly, nonatomic) NSMutableIndexSet *indexSet;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long lowestIndex;
@property (readonly) unsigned long long highestIndex;
@property (readonly) unsigned long long beginningIndex;
@property (readonly) unsigned long long endingIndex;
@property (nonatomic) BOOL reversed;

- (id)initWithIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;
- (void)removeIndexes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeIndex:(unsigned long long)a0;
- (void)addIndex:(unsigned long long)a0;

@end
