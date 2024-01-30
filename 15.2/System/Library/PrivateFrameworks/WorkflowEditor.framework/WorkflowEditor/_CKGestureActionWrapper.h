@class _scopeHandle, CKComponentScopeHandle;

@interface _CKGestureActionWrapper : NSObject <NSCopying> {
    struct CKTypedComponentAction<UIGestureRecognizer *> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } _action;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CKTypedComponentAction<UIGestureRecognizer *> { unsigned long long x0; id x1; id x2; SEL x3; })action;
- (id).cxx_construct;
- (id)initWithGestureAction:(struct CKTypedComponentAction<UIGestureRecognizer *> { unsigned long long x0; id x1; id x2; SEL x3; })a0;

@end
