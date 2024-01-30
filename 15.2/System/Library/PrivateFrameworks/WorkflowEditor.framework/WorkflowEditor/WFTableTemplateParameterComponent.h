@class WFTableTemplateParameterState, WFTableTemplateParameter;
@protocol WFVariableProvider;

@interface WFTableTemplateParameterComponent : WFParameterComponent {
    WFTableTemplateParameterState *_state;
    id<WFVariableProvider> _variableProvider;
    id /* block */ _updateBlock;
}

@property (readonly, weak, nonatomic) WFTableTemplateParameter *parameter;

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; long long x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;

- (void).cxx_destruct;
- (id /* block */)updateBlock;
- (void)handleParameterLayoutPressed;
- (void)rowComponentTapped;
- (void)rowComponent:(id)a0 deletedAtIndex:(unsigned long long)a1;
- (void)rowComponent:(id)a0 minusTappedAtIndex:(unsigned long long)a1;

@end
