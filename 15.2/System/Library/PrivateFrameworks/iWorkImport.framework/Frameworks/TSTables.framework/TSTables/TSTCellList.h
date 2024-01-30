@class __end_cap_, __end_;

@interface TSTCellList : TSPObject <NSCopying> {
    struct vector<TSTCell *, std::allocator<TSTCell *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>> { id *__value_; } x1; } _cells;
    unsigned long long _trailingEmptyCellCount;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)addCell:(id)a0;
- (id).cxx_construct;
- (id)cellAtIndex:(unsigned long long)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)replaceCell:(id)a0 atIndex:(unsigned long long)a1;
- (id)shallowAddCell:(id)a0;
- (void)addPrecopiedCell:(id)a0;
- (unsigned long long)trailingEmptyCellCount;
- (id)lastCell;

@end
