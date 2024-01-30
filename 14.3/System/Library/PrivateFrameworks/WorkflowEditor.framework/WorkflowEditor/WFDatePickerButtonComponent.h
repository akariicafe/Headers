@class WFCustomButtonComponent;

@interface WFDatePickerButtonComponent : CKCompositeComponent

@property (readonly, weak, nonatomic) WFCustomButtonComponent *buttonComponent;
@property (readonly, nonatomic) BOOL becomeFirstResponder;

+ (id)newWithAttributes:(const struct WFDatePickerAttributes { BOOL x0; id x1; struct WFDatePickerTitleAttachment { id x0; id x1; } x2; id x3; id x4; long long x5; id x6; id x7; id x8; BOOL x9; id x10; id x11; id x12; } *)a0 updateBlock:(id /* block */)a1 variableBlock:(id /* block */)a2 size:(const struct CKComponentSize { struct CKRelativeDimension { int x0; double x1; } x0; struct CKRelativeDimension { int x0; double x1; } x1; struct CKRelativeDimension { int x0; double x1; } x2; struct CKRelativeDimension { int x0; double x1; } x3; struct CKRelativeDimension { int x0; double x1; } x4; struct CKRelativeDimension { int x0; double x1; } x5; } *)a3;

- (void).cxx_destruct;

@end
