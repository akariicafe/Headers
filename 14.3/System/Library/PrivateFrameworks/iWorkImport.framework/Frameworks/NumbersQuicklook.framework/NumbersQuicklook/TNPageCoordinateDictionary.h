@interface TNPageCoordinateDictionary : NSObject {
    struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<TSUCellCoord>, true>, std::__1::allocator<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<TSUCellCoord>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _pageCoordinateDictionary;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)removeAllObjects;
- (id)allObjects;
- (void)setObject:(id)a0 forPageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)objectForPageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
