@class NSString, VKRouteContext;

@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver> {
    void *_transitSupport;
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKRouteContext *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _routeContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routeContextStateDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithRouteContext:(id)a0 transitSupport:(void *)a1;

@end
