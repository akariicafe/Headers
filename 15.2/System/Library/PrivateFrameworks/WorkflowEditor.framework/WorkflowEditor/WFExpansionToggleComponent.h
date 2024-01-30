@class _scopeHandle, CKComponent, CKComponentScopeHandle;

@interface WFExpansionToggleComponent : CKCompositeComponent {
    BOOL _expanded;
    struct CKTypedComponentAction<bool> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } _toggleAction;
    CKComponent *_disclosureComponent;
}

+ (id)newWithLabel:(id)a0 hintLabel:(id)a1 labelsToAlignTo:(id)a2 disclosureImage:(id)a3 toggleAction:(struct CKTypedComponentAction<bool> { unsigned long long x0; id x1; id x2; SEL x3; })a4 expanded:(BOOL)a5 style:(const struct WFParameterLayoutComponentStyle { id x0; id x1; id x2; id x3; } *)a6;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)toggleChanged;

@end
