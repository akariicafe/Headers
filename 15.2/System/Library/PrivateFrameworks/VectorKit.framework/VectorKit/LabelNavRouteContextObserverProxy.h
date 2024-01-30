@class NSString;

@interface LabelNavRouteContextObserverProxy : NSObject <VKRouteContextObserver> {
    struct RouteContextChangeObserver { void /* function */ **x0; } *_observer;
    struct vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> { void *__begin_; void *__end_; struct __compressed_pair<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> { void *__value_; struct StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator> { struct Allocator *_allocator; } __value_; } __end_cap_; } _observedContexts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving:(id)a0;
- (void)startObserving:(id)a0;
- (void)routeContextStateDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithRouteContextChangeObserver:(struct RouteContextChangeObserver { void /* function */ **x0; } *)a0;
- (void)dealloc;
- (id).cxx_construct;

@end
