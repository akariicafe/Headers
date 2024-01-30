@class GEOTilePool;

@interface GEOTileLoaderInternal : NSObject {
    struct list<LoadItem, std::__1::allocator<LoadItem> > { struct __list_node_base<LoadItem, void *> { struct __list_node_base<LoadItem, void *> *__prev_; struct __list_node_base<LoadItem, void *> *__next_; } __end_; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<LoadItem, void *> > > { unsigned long long __value_; } __size_alloc_; } _loadItems;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > { struct __compressed_pair<geo::DispatchTimer *, std::__1::default_delete<geo::DispatchTimer> > { struct DispatchTimer *__value_; } __ptr_; } _timer;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > > { struct __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> { struct __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> *__prev_; struct __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> *__next_; } __end_; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> > > { unsigned long long __value_; } __size_alloc_; } _freeableSizeRequesters;
    _Atomic int _memoryHits;
    _Atomic int _diskHits;
    _Atomic int _networkHits;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo> > { struct __split_buffer<ErrorInfo *, std::__1::allocator<ErrorInfo *> > { struct ErrorInfo **__first_; struct ErrorInfo **__begin_; struct ErrorInfo **__end_; struct __compressed_pair<ErrorInfo **, std::__1::allocator<ErrorInfo *> > { struct ErrorInfo **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<ErrorInfo> > { unsigned long long __value_; } __size_; } _recentErrors;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
