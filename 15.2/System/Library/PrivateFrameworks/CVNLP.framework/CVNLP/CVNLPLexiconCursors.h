@interface CVNLPLexiconCursors : NSObject <NSCopying> {
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> { struct _LXCursor **__begin_; struct _LXCursor **__end_; struct __compressed_pair<const _LXCursor **, std::allocator<const _LXCursor *>> { struct _LXCursor **__value_; } __end_cap_; } _sortedCursors;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)count;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithSortedCursors:(void *)a0;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)a0;

@end
