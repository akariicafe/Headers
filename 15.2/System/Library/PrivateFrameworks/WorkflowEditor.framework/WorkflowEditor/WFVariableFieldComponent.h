@class NSString;

@interface WFVariableFieldComponent : CKStatefulViewComponent

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) id /* block */ updateBlock;

+ (id)newWithText:(id)a0 editable:(BOOL)a1 updateBlock:(id /* block */)a2 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a3;

- (void).cxx_destruct;

@end
