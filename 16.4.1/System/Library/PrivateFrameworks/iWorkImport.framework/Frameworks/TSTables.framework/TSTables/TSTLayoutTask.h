@class TSTLayoutEngine, NSMutableArray;

@interface TSTLayoutTask : NSObject <NSCopying>

@property (readonly, weak, nonatomic) TSTLayoutEngine *layoutEngine;
@property (readonly, nonatomic) NSMutableArray *cellStatesToLayout;
@property (readonly, nonatomic) unsigned long long numberOfCellStates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clear;
- (void).cxx_destruct;
- (void)addCellState:(id)a0;
- (void)enumerateCellStatesUsingBlock:(id /* block */)a0;
- (id)initWithLayoutEngine:(id)a0;
- (id)initWithLayoutTask:(id)a0;
- (void)writeToLayoutEngineCaches:(id)a0;

@end
