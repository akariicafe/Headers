@class CKComponent, CKComponentScopeRoot, NSDictionary;

@interface CKTransactionalComponentDataSourceItem : NSObject {
    struct CKComponentLayout { CKComponent *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _layout;
}

@property (readonly, nonatomic) id model;
@property (readonly, nonatomic) CKComponentScopeRoot *scopeRoot;
@property (readonly, nonatomic) struct CKComponentBoundsAnimation { double duration; double delay; unsigned long long mode; unsigned long long options; double springDampingRatio; double springInitialVelocity; } boundsAnimation;

- (void).cxx_destruct;
- (const void *)layout;
- (id).cxx_construct;
- (id)initWithLayout:(const void *)a0 model:(id)a1 scopeRoot:(id)a2 boundsAnimation:(struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; })a3;

@end
