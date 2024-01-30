@class CKComponent;

@interface CKBackgroundLayoutComponent : CKComponent {
    CKComponent *_component;
    CKComponent *_background;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr *x0; struct __shared_weak_count *x1; } x0; } *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1;
+ (id)newWithComponent:(id)a0 background:(id)a1;

- (void).cxx_destruct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 restrictedToSize:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1 relativeToParentSize:(struct CGSize { double x0; double x1; })a2;

@end
