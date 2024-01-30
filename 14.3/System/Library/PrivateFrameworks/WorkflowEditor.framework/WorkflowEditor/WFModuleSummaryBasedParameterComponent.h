@class WFSlotTemplateSlot, WFParameter, WFModuleSummaryBasedParameterComponentStateWriter;
@protocol WFVariableProvider, WFParameterState, WFComponentNavigationContext, WFVariableUIDelegate;

@interface WFModuleSummaryBasedParameterComponent : WFParameterComponent {
    WFParameter *_parameter;
}

@property (readonly, nonatomic) WFModuleSummaryBasedParameterComponentStateWriter *stateWriter;
@property (readonly, nonatomic) id<WFParameterState> state;
@property (readonly, nonatomic) WFSlotTemplateSlot *buttonSlot;
@property (readonly, weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, nonatomic) id<WFComponentNavigationContext> navigationContext;

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; id x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;
+ (id)singleButtonSlotForParameter:(id)a0 state:(id)a1;

- (void).cxx_destruct;
- (id)parameter;

@end
