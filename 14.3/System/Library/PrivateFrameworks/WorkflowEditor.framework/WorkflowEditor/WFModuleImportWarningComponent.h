@class _scopeHandle, CKComponentScopeHandle;

@interface WFModuleImportWarningComponent : CKCompositeComponent {
    struct CKTypedComponentAction<unsigned long> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } _buttonAction;
}

+ (id)newWithMessage:(id)a0 buttonTitle:(id)a1 buttonAction:(struct CKTypedComponentAction<unsigned long> { unsigned long long x0; id x1; id x2; SEL x3; })a2 buttonGradient:(id)a3 loading:(BOOL)a4;

- (void).cxx_destruct;
- (void)buttonTapped:(id)a0;
- (id).cxx_construct;

@end
