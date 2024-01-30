@interface CKButtonComponent : CKComponent {
    struct CGSize { double width; double height; } _intrinsicSize;
}

+ (id)newWithTitles:(const void *)a0 titleColors:(const void *)a1 images:(const void *)a2 backgroundImages:(const void *)a3 titleFont:(id)a4 selected:(BOOL)a5 enabled:(BOOL)a6 action:(struct CKTypedComponentAction<UIEvent *> { unsigned long long x0; id x1; id x2; SEL x3; })a7 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a8 attributes:(const void *)a9 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration { id x0; })a10;

- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
