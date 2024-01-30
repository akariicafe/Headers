@class UIColor, NSString, NSArray, CKComponentScopeHandle, UIFont, CKComponent, UITraitCollection, CKInsetComponent, _scopeHandle;

@interface WFParameterLayoutComponent : CKComponent {
    NSString *_label;
    NSArray *_labelsToAlignTo;
    CKInsetComponent *_labelComponent;
    struct WFParameterLayoutComponentStyle { UIColor *backgroundColor; UIColor *highlightedBackgroundColor; UIFont *labelFont; UIColor *labelColor; } _style;
    struct WFCompressionResistance { int _type; double _value; } _controlResistance;
    UITraitCollection *_traitCollection;
}

@property (readonly, nonatomic) CKComponent *controlComponent;
@property (readonly, nonatomic) struct CKTypedComponentAction<> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } selectionAction;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
+ (id)newWithLabel:(id)a0 labelsToAlignTo:(id)a1 selectionAction:(struct CKTypedComponentAction<> { unsigned long long x0; id x1; id x2; SEL x3; })a2 selectionEnabled:(BOOL)a3 traitCollection:(id)a4 style:(const struct WFParameterLayoutComponentStyle { id x0; id x1; id x2; id x3; } *)a5 accessibility:(const struct WFParameterLayoutComponentAccessibility { BOOL x0; id x1; id x2; id x3; unsigned long long x4; } *)a6 controlResistance:(const struct WFCompressionResistance { int x0; double x1; } *)a7 controlComponent:(id)a8;
+ (id)newWithView:(const void *)a0 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)handleParameterLayoutPressed;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
