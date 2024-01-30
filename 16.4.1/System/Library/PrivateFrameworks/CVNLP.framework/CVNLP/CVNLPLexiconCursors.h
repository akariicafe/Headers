@interface CVNLPLexiconCursors : NSObject <NSCopying> {
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> { struct _LXCursor **__begin_; struct _LXCursor **__end_; struct __compressed_pair<const _LXCursor **, std::allocator<const _LXCursor *>> { struct _LXCursor **__value_; } __end_cap_; } _sortedCursors;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)count;
- (void)dealloc;
- (void).cxx_destruct;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)a0;
- (id)initWithSortedCursors:(void *)a0;

@end
