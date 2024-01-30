@class WFRowTemplateParameterState, _scopeHandle, CKComponentScopeHandle;

@interface WFRowTemplateParameterComponent : CKCompositeComponent {
    WFRowTemplateParameterState *_state;
    unsigned long long _rowIndex;
    struct CKTypedComponentAction<unsigned long> { unsigned long long _variant; _scopeHandle *_target; CKComponentScopeHandle *x0; SEL _selector; } _deleteAction;
}

+ (id)numberFormatter;
+ (id)itemFont;
+ (id)newWithState:(id)a0 rowIndex:(unsigned long long)a1 updateBlock:(id /* block */)a2 deleteAction:(struct CKTypedComponentAction<unsigned long> { unsigned long long x0; id x1; id x2; SEL x3; })a3 tappedAction:(struct CKTypedComponentAction<> { unsigned long long x0; id x1; id x2; SEL x3; })a4 options:(struct WFRowTemplateParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; })a5 style:(const struct WFWrappingStackLayoutComponentStyle { unsigned long long x0; double x1; unsigned long long x2; double x3; } *)a6 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a7 variableProvider:(id)a8 variableUIDelegate:(id)a9 navigationContext:(id)a10;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)deleteButtonPressed;

@end
