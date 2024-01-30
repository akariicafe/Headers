@class CKComponent, CKComponentScopeRoot, NSDictionary;

@interface CKTransactionalComponentDataSourceItem : NSObject {
    struct CKComponentLayout { CKComponent *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _layout;
}

@property (readonly, nonatomic) id model;
@property (readonly, nonatomic) CKComponentScopeRoot *scopeRoot;
@property (readonly, nonatomic) struct CKComponentBoundsAnimation { double duration; double delay; unsigned long long mode; unsigned long long options; double springDampingRatio; double springInitialVelocity; } boundsAnimation;

- (void).cxx_destruct;
- (const struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; } *)layout;
- (id).cxx_construct;
- (id)initWithLayout:(const struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; } *)a0 model:(id)a1 scopeRoot:(id)a2 boundsAnimation:(struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; })a3;

@end
