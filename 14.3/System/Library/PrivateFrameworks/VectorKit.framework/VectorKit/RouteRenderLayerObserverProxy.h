@class NSString;

@interface RouteRenderLayerObserverProxy : NSObject <VKPolylineGroupOverlayObserver> {
    struct PolylineGroupChangeObserver { void /* function */ **x0; } *_polylineGroupObserver;
    struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *__begin_; struct _retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *__end_; struct __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *__value_; } __end_cap_; } _retainedGroups;
    struct set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> > { struct __tree<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<VKPolylineGroupOverlay *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::less<VKPolylineGroupOverlay *> > { unsigned long long __value_; } __pair3_; } __tree_; } _observedGroupsSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving:(id)a0;
- (void)startObserving:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)polylineGroup:(id)a0 didAddPolyline:(id)a1;
- (void)polylineGroup:(id)a0 didFocusPolyline:(id)a1;
- (void)polylineGroup:(id)a0 didSelectPolyline:(id)a1;
- (id).cxx_construct;
- (id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver { void /* function */ **x0; } *)a0;
- (void)polylineGroup:(id)a0 didRemovePolyline:(id)a1;

@end
