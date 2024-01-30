@class TSTMasterLayout, NSMutableArray;

@interface TSTLayoutTask : NSObject <NSCopying>

@property (readonly, weak, nonatomic) TSTMasterLayout *masterLayout;
@property (readonly, nonatomic) NSMutableArray *cellStatesToLayout;
@property (readonly, nonatomic) unsigned long long numberOfCellStates;

- (void)clear;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMasterLayout:(id)a0;
- (void)addCellState:(id)a0;
- (void)enumerateCellStatesUsingBlock:(id /* block */)a0;
- (void)writeToMasterLayoutCaches:(id)a0;
- (id)initWithLayoutTask:(id)a0;

@end
