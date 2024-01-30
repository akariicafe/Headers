@class WFLocationParameterState, WFParameter, WFVariableChooserParameterLayoutComponent;
@protocol WFVariableProvider, WFComponentNavigationContext;

@interface WFLocationParameterComponent : WFParameterComponent {
    WFParameter *_parameter;
    id /* block */ _updateBlock;
}

@property (readonly, nonatomic) WFLocationParameterState *state;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, nonatomic) WFVariableChooserParameterLayoutComponent *layoutComponent;
@property (nonatomic) BOOL processing;

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; id x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;

- (void).cxx_destruct;
- (id)parameter;
- (id /* block */)updateBlock;
- (void)presentTokenChooser:(id)a0;

@end
