@class CKComponentScopeRoot, NSString, NSDictionary, NSSet, UIView, CKComponent;
@protocol CKComponentHostingViewDelegate, CKComponentSizeRangeProviding, NSObject;

@interface CKComponentHostingView : UIView <CKComponentStateListener, CKComponentDebugReflowListener> {
    Class _componentProvider;
    id<CKComponentSizeRangeProviding> _sizeRangeProvider;
    struct CKComponentHostingViewInputs { CKComponentScopeRoot *scopeRoot; id<NSObject> model; id<NSObject> context; struct unordered_multimap<int, id (^)(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id (^)(id)> > > { struct __hash_table<std::__1::__hash_value_type<int, id (^)(id)>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, id (^)(id)> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::hash<int>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::equal_to<int>, true> > { float __value_; } __p3_; } __table_; } stateUpdates; } _pendingInputs;
    struct CKComponentBoundsAnimation { double duration; double delay; unsigned long long mode; unsigned long long options; double springDampingRatio; double springInitialVelocity; } _boundsAnimation;
    CKComponent *_component;
    BOOL _componentNeedsUpdate;
    unsigned long long _requestedUpdateMode;
    struct CKComponentLayout { CKComponent *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _mountedLayout;
    NSSet *_mountedComponents;
    BOOL _scheduledAsynchronousComponentUpdate;
    BOOL _isSynchronouslyUpdatingComponent;
    BOOL _isMountingComponent;
}

@property (readonly, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<CKComponentHostingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateModel:(id)a0 mode:(unsigned long long)a1;
- (void)updateContext:(id)a0 mode:(unsigned long long)a1;
- (id)initWithComponentProvider:(Class)a0 sizeRangeProvider:(id)a1;
- (void)componentScopeHandleWithIdentifier:(int)a0 rootIdentifier:(int)a1 didReceiveStateUpdate:(id /* block */)a2 mode:(unsigned long long)a3;
- (void)didReceiveReflowComponentsRequest;
- (const struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; } *)mountedLayout;
- (void)_setNeedsUpdateWithMode:(unsigned long long)a0;
- (void)_asynchronouslyUpdateComponentIfNeeded;
- (void)_scheduleAsynchronousUpdate;
- (void)_applyResult:(const struct CKBuildComponentResult { id x0; id x1; struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; } x2; } *)a0;
- (void)_synchronouslyUpdateComponentIfNeeded;

@end
