@class _scopeHandle, CKComponentScopeHandle;

@interface CKComponentActionControlForwarder : NSObject {
    struct CKTypedComponentAction<UIEvent *> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } _action;
}

- (id)initWithAction:(struct CKTypedComponentAction<UIEvent *> { unsigned long long x0; id x1; id x2; SEL x3; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)handleControlEventFromSender:(id)a0 withEvent:(id)a1;

@end
