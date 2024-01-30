@class NSSet, CKComponent, NSDictionary;

@interface CKComponentDataSourceAttachState : NSObject {
    struct CKComponentLayout { CKComponent *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _layout;
}

@property (readonly, nonatomic) NSSet *mountedComponents;
@property (readonly, nonatomic) int scopeIdentifier;

- (void).cxx_destruct;
- (const struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; } *)layout;
- (id).cxx_construct;
- (id)initWithScopeIdentifier:(int)a0 mountedComponents:(id)a1 layout:(const struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; } *)a2;

@end
