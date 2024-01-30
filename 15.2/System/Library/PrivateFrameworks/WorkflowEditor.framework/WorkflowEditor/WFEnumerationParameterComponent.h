@class WFVariableSubstitutableParameterState, WFEnumerationSegmentedControlComponent, WFEnumerationParameter;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFEnumerationParameterComponent : WFParameterComponent {
    id /* block */ _updateBlock;
}

@property (readonly, nonatomic) WFVariableSubstitutableParameterState *state;
@property (readonly, nonatomic) WFEnumerationSegmentedControlComponent *segmentedControlComponent;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) BOOL processing;
@property (readonly, weak, nonatomic) WFEnumerationParameter *parameter;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;
+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; long long x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;
+ (BOOL)editsMultipleValues;

- (void).cxx_destruct;
- (id /* block */)updateBlock;

@end
