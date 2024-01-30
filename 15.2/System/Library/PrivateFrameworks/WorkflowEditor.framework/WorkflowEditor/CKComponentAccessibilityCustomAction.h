@class CKComponentScopeHandle, _scopeHandle, UIView;

@interface CKComponentAccessibilityCustomAction : UIAccessibilityCustomAction {
    UIView *_ck_view;
    struct CKTypedComponentAction<> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } _ck_action;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithName:(id)a0 action:(struct CKTypedComponentAction<> { unsigned long long x0; id x1; id x2; SEL x3; })a1 view:(id)a2;
- (BOOL)ck_send;

@end
