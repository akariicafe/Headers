@class UIColor, NSNumber, NSAttributedString, NSCharacterSet;

@interface CKTextComponent : CKComponent {
    struct CKTextKitAttributes { NSAttributedString *attributedString; NSAttributedString *truncationAttributedString; NSCharacterSet *avoidTailTruncationSet; long long lineBreakMode; unsigned long long maximumNumberOfLines; struct CGSize { double width; double height; } shadowOffset; UIColor *shadowColor; double shadowOpacity; double shadowRadius; void /* function */ *layoutManagerFactory; } _attributes;
    struct CKTextComponentAccessibilityContext { NSNumber *isAccessibilityElement; NSNumber *providesAccessibleElements; struct CKComponentAccessibilityTextAttribute { id /* block */ accessibilityLazyTextBlock; } accessibilityLabel; } _accessibilityContext;
}

+ (id)newWithTextAttributes:(const struct CKTextKitAttributes { id x0; id x1; id x2; long long x3; unsigned long long x4; struct CGSize { double x0; double x1; } x5; id x6; double x7; double x8; void /* function */ *x9; } *)a0 viewAttributes:(const void *)a1 options:(const struct CKTextComponentOptions { unsigned long long x0; struct CKTextComponentAccessibilityContext { id x0; id x1; struct CKComponentAccessibilityTextAttribute { id /* block */ x0; } x2; } x1; } *)a2 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)wf_applyVisualStying:(id)a0;
- (struct MountResult { BOOL x0; struct MountContext { struct shared_ptr<CK::Component::ViewManager> { struct ViewManager *x0; struct __shared_weak_count *x1; } x0; struct CGPoint { double x0; double x1; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; BOOL x3; } x1; })mountInContext:(const void *)a0 size:(struct CGSize { double x0; double x1; })a1 children:(struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; })a2 supercomponent:(id)a3;

@end
