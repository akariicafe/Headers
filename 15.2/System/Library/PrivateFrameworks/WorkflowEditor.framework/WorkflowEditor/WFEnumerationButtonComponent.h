@class WFVariableSubstitutableParameterState, WFEnumerationParameter;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFEnumerationButtonComponent : CKCompositeComponent {
    BOOL _processing;
    WFEnumerationParameter *_parameter;
    WFVariableSubstitutableParameterState *_state;
    id /* block */ _updateBlock;
    id<WFVariableProvider> _variableProvider;
    id<WFVariableUIDelegate> _variableUIDelegate;
    id<WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; long long x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6;

- (void).cxx_destruct;

@end
