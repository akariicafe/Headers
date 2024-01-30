@interface CKStackLayoutComponent : CKComponent {
    struct CKStackLayoutComponentStyle { unsigned long long direction; double spacing; unsigned long long justifyContent; unsigned long long alignItems; } _style;
    struct vector<CKStackLayoutComponentChild, std::allocator<CKStackLayoutComponentChild>> { struct CKStackLayoutComponentChild *__begin_; struct CKStackLayoutComponentChild *__end_; struct __compressed_pair<CKStackLayoutComponentChild *, std::allocator<CKStackLayoutComponentChild>> { struct CKStackLayoutComponentChild *__value_; } __end_cap_; } _children;
}

+ (id)newWithView:(const void *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1 style:(const struct CKStackLayoutComponentStyle { unsigned long long x0; double x1; unsigned long long x2; unsigned long long x3; } *)a2 children:(const void *)a3;
+ (id)newRTLCompatibleWithView:(const void *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1 style:(const struct CKStackLayoutComponentStyle { unsigned long long x0; double x1; unsigned long long x2; unsigned long long x3; } *)a2 children:(const void *)a3;
+ (id)newWithView:(const void *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
