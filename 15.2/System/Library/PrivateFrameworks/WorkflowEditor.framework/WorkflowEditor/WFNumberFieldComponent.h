@class NSString, NSSet, _scopeHandle, CKComponentScopeHandle;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFNumberFieldComponent : CKStatefulViewComponent

@property (readonly, nonatomic) struct WFNumberFieldAttributes { BOOL editable; NSString *placeholder; long long textAlignment; BOOL becomeFirstResponder; NSString *text; BOOL allowsDecimalNumbers; BOOL allowsNegatingNumbers; id<WFVariableProvider> variableProvider; id<WFVariableUIDelegate> variableUIDelegate; NSSet *allowedVariableTypes; BOOL variablesDisabled; long long keyboardAppearance; } attributes;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) id /* block */ variableBlock;
@property (readonly, nonatomic) struct CKTypedComponentAction<> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } doneAction;

+ (id)newWithAttributes:(const struct WFNumberFieldAttributes { BOOL x0; id x1; long long x2; BOOL x3; id x4; BOOL x5; BOOL x6; id x7; id x8; id x9; BOOL x10; long long x11; } *)a0 updateBlock:(id /* block */)a1 variableBlock:(id /* block */)a2 doneAction:(struct CKTypedComponentAction<> { unsigned long long x0; id x1; id x2; SEL x3; })a3 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a4;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
