@class WFParameter, NSString, WFModuleAppearance, UITraitCollection;
@protocol WFVariableProvider, WFParameterState, WFComponentNavigationContext, WFVariableUIDelegate;

@interface WFSwiftUIParameterHostingComponent : CKStatefulViewComponent

@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) id<WFParameterState> state;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) struct WFParameterComponentOptions { BOOL editable; BOOL processing; BOOL becomeFirstResponder; NSString *actionName; WFModuleAppearance *appearance; BOOL lastParameter; long long widgetFamily; UITraitCollection *traitCollection; } options;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; long long x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
