@class WFParameter, NSSet, MTVisualStylingProvider, _scopeHandle, UIColor, CKComponentScopeHandle, WFMultipleValueParameterState;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFMultipleValueEditorComponent : CKStatefulViewComponent

@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) WFMultipleValueParameterState *state;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, copy, nonatomic) NSSet *allowedVariableTypes;
@property (readonly, nonatomic) BOOL variablesDisabled;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) long long widgetFamily;
@property (readonly, nonatomic) long long maximumItemsNumber;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } confirmationAction;
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider;
@property (readonly, nonatomic) UIColor *overridingBackgroundColor;
@property (readonly, nonatomic) double additionalBottomMargin;

+ (id)newWithParameter:(id)a0 state:(id)a1 editable:(BOOL)a2 widgetFamily:(long long)a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 variablesDisabled:(BOOL)a7 allowedVariableTypes:(id)a8 updateBlock:(id /* block */)a9 confirmationAction:(struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> { unsigned long long x0; id x1; id x2; SEL x3; })a10 additionalBottomMargin:(double)a11 fillProvider:(id)a12 overridingBackgroundColor:(id)a13 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a14;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
