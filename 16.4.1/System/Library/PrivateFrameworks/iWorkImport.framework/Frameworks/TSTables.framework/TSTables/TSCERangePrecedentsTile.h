@interface TSCERangePrecedentsTile : TSPObject {
    struct map<TSUCellCoord, std::set<TSUCellRect>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::set<TSUCellRect>>>> { struct __tree<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, std::set<TSUCellRect>>, std::less<TSUCellCoord>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _fromCoordToReferRect;
}

@property (readonly, nonatomic) unsigned long long numRangeRecords;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned short toInternalOwnerID;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)addRect:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a0 fromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (BOOL)containsFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)containsRect:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a0 fromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (void)enumerateAllRanges:(id /* block */)a0;
- (void)enumerateAllRangesForFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 usingBlock:(id /* block */)a1;
- (id)initWithOwnerId:(unsigned short)a0 context:(id)a1;
- (void)removeRect:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a0 fromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (void)removeRectsForFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;

@end
