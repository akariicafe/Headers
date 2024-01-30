@class TSTAccumulator, TSTGroupNode, TSTAggregator, NSMutableArray;

@interface TSTAggNode : NSObject

@property (readonly, nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } formulaCoord;
@property (retain, nonatomic) TSTAccumulator *accumulator;
@property (weak, nonatomic) TSTGroupNode *groupNode;
@property (readonly, weak, nonatomic) TSTAggregator *aggregator;
@property (readonly, nonatomic) unsigned char groupLevel;
@property (retain, nonatomic) NSMutableArray *children;

- (id)description;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0;
- (void)enumerateDirectChildren:(id /* block */)a0;
- (id)initWithArchive:(const void *)a0 aggregator:(id)a1;
- (id)initWithFormulaCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 groupNode:(id)a1 aggregator:(id)a2;
- (void)clearAggFormulas:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)upgradeForNewAggregateTypes:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)descriptionWithGroupBy:(id)a0;

@end
