@class WFQuantityFieldParameter, WFQuantityParameterState;
@protocol WFComponentNavigationContext;

@interface WFQuantityFieldParameterComponent : WFParameterComponent {
    WFQuantityParameterState *_state;
    id<WFComponentNavigationContext> _navigationContext;
    id /* block */ _updateBlock;
}

@property (readonly, weak, nonatomic) WFQuantityFieldParameter *parameter;

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; id x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;

- (void).cxx_destruct;
- (void)buttonTapped:(id)a0;
- (id /* block */)updateBlock;

@end
