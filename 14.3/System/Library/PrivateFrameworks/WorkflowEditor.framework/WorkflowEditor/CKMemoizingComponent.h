@class CKComponent, CKMemoizingComponentStateWrapper;

@interface CKMemoizingComponent : CKComponent {
    CKMemoizingComponentStateWrapper *_wrapper;
    CKComponent *_component;
}

+ (id)initialState;
+ (id)newWithComponentBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 restrictedToSize:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1 relativeToParentSize:(struct CGSize { double x0; double x1; })a2;

@end
