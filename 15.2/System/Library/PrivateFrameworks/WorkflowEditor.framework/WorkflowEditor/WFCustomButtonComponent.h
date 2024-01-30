@class UIFont, NSString, UIImage, NSAttributedString, UITraitCollection;

@interface WFCustomButtonComponent : CKComponent {
    struct CGSize { double width; double height; } _intrinsicSize;
    NSAttributedString *_attributedTitle;
    NSString *_title;
    UIFont *_titleFont;
    UIImage *_image;
    UIImage *_backgroundImage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentEdgeInsets;
    double _spacing;
    long long _numberOfLines;
    UITraitCollection *_traitCollection;
}

+ (id)newWithTitles:(const void *)a0 attributedTitles:(const void *)a1 titleColors:(const void *)a2 images:(const void *)a3 backgroundImages:(const void *)a4 titleFont:(id)a5 selected:(BOOL)a6 enabled:(BOOL)a7 action:(struct CKTypedComponentAction<UIEvent *> { unsigned long long x0; id x1; id x2; SEL x3; })a8 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a9 buttonClass:(const void *)a10 attributes:(const void *)a11 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration { id x0; })a12;
+ (id)newWithTitles:(const void *)a0 attributedTitles:(const void *)a1 titleColors:(const void *)a2 images:(const void *)a3 backgroundImages:(const void *)a4 titleFont:(id)a5 selected:(BOOL)a6 enabled:(BOOL)a7 traitCollection:(id)a8 action:(struct CKTypedComponentAction<UIEvent *> { unsigned long long x0; id x1; id x2; SEL x3; })a9 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a10 buttonClass:(const void *)a11 attributes:(const void *)a12 titleLabelAttributes:(const void *)a13 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration { id x0; })a14;

- (void).cxx_destruct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
