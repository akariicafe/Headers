@class WFParameter;

@interface WFTagFieldParameterComponent : WFParameterComponent {
    WFParameter *_parameter;
    id /* block */ _updateBlock;
}

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; id x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;

- (void).cxx_destruct;
- (id)parameter;
- (id /* block */)updateBlock;

@end
