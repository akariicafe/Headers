@class TSTAccumulator, TSTGroupNode, TSTAggregator, NSMutableArray;

@interface TSTAggNode : NSObject

@property (readonly, nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } formulaCoord;
@property (retain, nonatomic) TSTAccumulator *accumulator;
@property (weak, nonatomic) TSTGroupNode *groupNode;
@property (readonly, weak, nonatomic) TSTAggregator *aggregator;
@property (readonly, nonatomic) unsigned char groupLevel;
@property (retain, nonatomic) NSMutableArray *children;

- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_AggNodeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_AggNodeArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct CellCoordinateArchive *x5; struct AccumulatorArchive *x6; } *)a0;
- (void)enumerateDirectChildren:(id /* block */)a0;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_AggNodeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_AggNodeArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct CellCoordinateArchive *x5; struct AccumulatorArchive *x6; } *)a0 aggregator:(id)a1;
- (id)initWithFormulaCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 groupNode:(id)a1 aggregator:(id)a2;
- (void)clearAggFormulas:(id)a0 inOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (id)descriptionWithCategoryOwner:(id)a0;

@end
