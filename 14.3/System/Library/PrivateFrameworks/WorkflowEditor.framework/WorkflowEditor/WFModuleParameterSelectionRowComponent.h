@class _scopeHandle, NSString, CKComponentScopeHandle;

@interface WFModuleParameterSelectionRowComponent : CKCompositeComponent {
    struct CKTypedComponentAction<NSString *> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } _action;
    NSString *_identifier;
}

+ (id)newWithIdentifier:(id)a0 title:(id)a1 disabledSubtitle:(id)a2 enabled:(BOOL)a3 action:(struct CKTypedComponentAction<NSString *> { unsigned long long x0; id x1; id x2; SEL x3; })a4 appearance:(id)a5;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)handleParameterLayoutPressed;

@end
