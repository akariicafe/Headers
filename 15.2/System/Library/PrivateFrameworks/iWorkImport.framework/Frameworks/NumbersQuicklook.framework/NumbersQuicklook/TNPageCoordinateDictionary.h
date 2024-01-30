@interface TNPageCoordinateDictionary : NSObject {
    struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> { struct __tree<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>, std::allocator<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSUCellCoord, std::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::less<TSUCellCoord>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _pageCoordinateDictionary;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

- (void)removeAllObjects;
- (id)allObjects;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setObject:(id)a0 forPageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)objectForPageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
