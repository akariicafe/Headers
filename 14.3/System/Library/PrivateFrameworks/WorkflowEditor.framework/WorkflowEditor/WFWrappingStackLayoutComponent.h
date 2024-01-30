@class __end_cap_, __end_;

@interface WFWrappingStackLayoutComponent : CKComponent {
    struct WFWrappingStackLayoutComponentStyle { unsigned long long direction; double spacing; unsigned long long alignItems; double rowHeight; } _style;
    struct vector<CKComponent *, std::__1::allocator<CKComponent *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<CKComponent *__strong *, std::__1::allocator<CKComponent *> > { id *__value_; } x1; } _children;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr *x0; struct __shared_weak_count *x1; } x0; } *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1 style:(const struct WFWrappingStackLayoutComponentStyle { unsigned long long x0; double x1; unsigned long long x2; double x3; } *)a2 children:(const struct vector<CKComponent *, std::__1::allocator<CKComponent *> > { id *x0; id *x1; struct __compressed_pair<CKComponent *__strong *, std::__1::allocator<CKComponent *> > { id *x0; } x2; } *)a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > > { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
