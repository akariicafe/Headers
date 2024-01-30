@interface CKStaticLayoutComponent : CKComponent {
    struct vector<CKStaticLayoutComponentChild, std::allocator<CKStaticLayoutComponentChild>> { struct CKStaticLayoutComponentChild *__begin_; struct CKStaticLayoutComponentChild *__end_; struct __compressed_pair<CKStaticLayoutComponentChild *, std::allocator<CKStaticLayoutComponentChild>> { struct CKStaticLayoutComponentChild *__value_; } __end_cap_; } _children;
}

+ (id)newWithView:(const void *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1 children:(const void *)a2;
+ (id)newWithChildren:(const void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
