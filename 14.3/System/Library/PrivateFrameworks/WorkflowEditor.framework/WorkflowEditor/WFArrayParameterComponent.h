@class WFArrayParameter, WFArrayParameterState;

@interface WFArrayParameterComponent : WFParameterComponent {
    WFArrayParameterState *_state;
    id /* block */ _updateBlock;
}

@property (readonly, weak, nonatomic) WFArrayParameter *parameter;

+ (Class)stateClass;
+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; id x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;
+ (BOOL)standaloneVariablesAsContentItems;

- (void).cxx_destruct;
- (id /* block */)updateBlock;
- (void)arrayEditor:(id)a0 confirmDeletion:(id)a1;
- (void)notifyParameterObserverWithValues:(id)a0 updateItem:(id)a1;

@end
