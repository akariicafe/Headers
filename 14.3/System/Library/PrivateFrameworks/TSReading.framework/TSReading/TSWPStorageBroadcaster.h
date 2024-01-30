@interface TSWPStorageBroadcaster : NSObject {
    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver> >, std::__1::allocator<id<TSWPStorageObserver> > > { struct __tree<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver> >, std::__1::allocator<id<TSWPStorageObserver> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<id<TSWPStorageObserver>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::less<id<TSWPStorageObserver> > > { unsigned long long __value_; } __pair3_; } __tree_; } _observers;
}

- (void)removeAllObservers;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id).cxx_construct;
- (void)broadcastStorage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(int)a3;

@end
