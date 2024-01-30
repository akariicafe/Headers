@interface TSWPStorageBroadcaster : NSObject {
    struct set<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver> >, std::allocator<id<TSWPStorageObserver> > > { struct __tree<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver> >, std::allocator<id<TSWPStorageObserver> > > { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<TSWPStorageObserver>, void *> > > { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<id<TSWPStorageObserver> > > { unsigned long long __value_; } __pair3_; } __tree_; } _observers;
}

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)broadcastStorage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(int)a3;

@end
