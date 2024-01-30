@class UIFont, NSString, WFVariableString, CKComponentScopeHandle, NSValue, NSSet, _scopeHandle, UIColor;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFTextInputComponent : CKStatefulViewComponent

@property (readonly, nonatomic) struct WFTextInputAttributes { BOOL editable; BOOL multiline; BOOL secureTextEntry; NSString *placeholder; long long keyboardType; long long textAlignment; NSString *textContentType; long long autocorrectionType; long long autocapitalizationType; BOOL smartQuotesDisabled; BOOL smartDashesDisabled; BOOL becomeFirstResponder; WFVariableString *variableString; NSValue *selectedRange; id<WFVariableProvider> variableProvider; id<WFVariableUIDelegate> variableUIDelegate; NSSet *allowedVariableTypes; BOOL variablesDisabled; UIFont *font; BOOL throttleUpdates; struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInset; UIColor *textColor; UIColor *backgroundColor; unsigned long long syntaxHighlightingType; long long keyboardAppearance; } attributes;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) struct CKTypedComponentAction<> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } beginAction;
@property (readonly, nonatomic) struct CKTypedComponentAction<> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } doneAction;

+ (id)newWithAttributes:(const struct WFTextInputAttributes { BOOL x0; BOOL x1; BOOL x2; id x3; long long x4; long long x5; id x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; id x12; id x13; id x14; id x15; id x16; BOOL x17; id x18; BOOL x19; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x20; id x21; id x22; unsigned long long x23; long long x24; } *)a0 updateBlock:(id /* block */)a1 beginAction:(struct CKTypedComponentAction<> { unsigned long long x0; id x1; id x2; SEL x3; })a2 doneAction:(struct CKTypedComponentAction<> { unsigned long long x0; id x1; id x2; SEL x3; })a3 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a4;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
