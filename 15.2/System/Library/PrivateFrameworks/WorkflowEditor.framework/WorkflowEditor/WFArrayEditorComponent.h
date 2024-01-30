@class NSArray, NSSet, _scopeHandle, CKComponentScopeHandle;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFArrayEditorComponent : CKStatefulViewComponent

@property (readonly, nonatomic) NSArray *items;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, copy, nonatomic) NSSet *allowedValueTypes;
@property (readonly, copy, nonatomic) NSSet *allowedVariableTypes;
@property (readonly, nonatomic) BOOL standaloneVariablesAsContentItems;
@property (readonly, nonatomic) BOOL variablesDisabled;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } confirmationAction;
@property (readonly, nonatomic) double additionalBottomMargin;

+ (id)newWithItems:(id)a0 editable:(BOOL)a1 variableProvider:(id)a2 variableUIDelegate:(id)a3 navigationContext:(id)a4 variablesDisabled:(BOOL)a5 allowedValueTypes:(id)a6 allowedVariableTypes:(id)a7 standaloneVariablesAsContentItems:(BOOL)a8 updateBlock:(id /* block */)a9 confirmationAction:(struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> { unsigned long long x0; id x1; id x2; SEL x3; })a10 additionalBottomMargin:(double)a11 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a12;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CKComponentLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<CKComponentLayoutChild>> { void *x0; struct __shared_weak_count *x1; } x2; id x3; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
