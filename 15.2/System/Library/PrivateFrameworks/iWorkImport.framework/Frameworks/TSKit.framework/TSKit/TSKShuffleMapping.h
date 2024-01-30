@interface TSKShuffleMapping : NSObject <NSCopying> {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _reverseMapping;
    BOOL _reverseMappingValid;
}

@property (nonatomic) unsigned int firstMovedIndex;
@property (nonatomic) unsigned int destinationIndexForMove;
@property (nonatomic) unsigned int numberOfIndexesMoved;
@property (readonly, nonatomic) unsigned int startIndex;
@property (readonly, nonatomic) unsigned int endIndex;
@property (readonly, nonatomic) struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } mapping;
@property (readonly, nonatomic) unsigned int mappingSize;
@property (readonly, nonatomic) BOOL isIdentityMapping;
@property (readonly, nonatomic) BOOL isMoveOperation;

- (BOOL)isMove;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)sourceIndexes;
- (id)initWithStartIndex:(unsigned int)a0 endIndex:(unsigned int)a1 mapping:(const void *)a2;
- (id)initWithStartIndex:(unsigned int)a0 endIndex:(unsigned int)a1;
- (id)copyInverse;
- (unsigned int)mapIndex:(unsigned int)a0;
- (unsigned int)reverseMapIndex:(unsigned int)a0;
- (void)enumerateMappingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)swapIndex:(unsigned int)a0 withIndex:(unsigned int)a1;
- (void)enumerateMappingFollowingSwapsUsingBlock:(id /* block */)a0;
- (void)applyMappingToIndexSet:(id)a0;
- (id)p_copyWithZone:(struct _NSZone { } *)a0 mapping:(const void *)a1;
- (void)p_buildReverseMapping;
- (void)p_invalidateReverseMapping;
- (id)initForMovedIndexesStartingAtIndex:(unsigned int)a0 destinationIndex:(unsigned int)a1 numberOfIndexes:(unsigned int)a2;
- (void)insert:(unsigned int)a0 IndexesAtIndex:(unsigned int)a1 insertingBefore:(BOOL)a2;
- (void)remove:(unsigned int)a0 IndexesAtIndex:(unsigned int)a1;

@end
