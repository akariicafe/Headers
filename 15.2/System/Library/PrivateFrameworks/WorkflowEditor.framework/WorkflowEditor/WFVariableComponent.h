@class WFCustomButtonComponent;
@protocol WFVariableUIDelegate;

@interface WFVariableComponent : CKCompositeComponent <WFVariableDelegate>

@property (readonly, nonatomic) id /* block */ updateBlock;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, weak, nonatomic) WFCustomButtonComponent *buttonComponent;

+ (id)newWithVariable:(id)a0 variableUIDelegate:(id)a1 resultType:(unsigned long long)a2 editable:(BOOL)a3 updateBlock:(id /* block */)a4;

- (void).cxx_destruct;
- (void)variableDidChange:(id)a0;
- (void)variableDidClear:(id)a0;
- (void)variableDidUpdate:(id)a0;

@end
