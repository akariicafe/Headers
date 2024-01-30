@interface WFRowTemplateItemTextFieldComponent : CKCompositeComponent

+ (id)newWithState:(id)a0 identifier:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFRowTemplateItemTextFieldOptions { BOOL x0; id x1; id x2; long long x3; id x4; id x5; id x6; BOOL x7; BOOL x8; id x9; id x10; id x11; })a3 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a4;

- (void)showTextField:(id)a0;
- (void)hideTextField:(id)a0;

@end
