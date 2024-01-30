@class NSArray;

@interface BMAprioriPatternMiner : NSObject <BMPatternMiner>

@property BOOL shouldStop;
@property (readonly, nonatomic) NSArray *indexBaskets;
@property (nonatomic) unsigned long long maxItemsetSize;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithBaskets:(id)a0;
- (id)minePatternsWithMinSupport:(unsigned long long)a0 constrainedToPatternsWithTypes:(id)a1;
- (void)terminateEarly;
- (id)supportOfItemIndexSet:(id)a0;
- (id)getItemIndexSetsWithMinSupport:(double)a0 itemIndexSets:(id)a1;

@end
