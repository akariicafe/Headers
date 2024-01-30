@class WFCustomButtonComponent;

@interface WFNumberPickerButtonComponent : CKCompositeComponent

@property (readonly, weak, nonatomic) WFCustomButtonComponent *buttonComponent;
@property (readonly, nonatomic) BOOL becomeFirstResponder;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) id /* block */ variableBlock;

+ (id)newWithAttributes:(const struct WFNumberPickerAttributes { BOOL x0; id x1; id x2; id x3; unsigned long long x4; struct _NSRange { unsigned long long x0; unsigned long long x1; } x5; BOOL x6; id x7; id x8; id x9; } *)a0 identifier:(id)a1 updateBlock:(id /* block */)a2 variableBlock:(id /* block */)a3;

- (void).cxx_destruct;

@end
