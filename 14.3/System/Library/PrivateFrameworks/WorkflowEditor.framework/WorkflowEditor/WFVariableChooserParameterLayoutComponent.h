@class WFVariable, CKComponent, WFParameter;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFVariableChooserParameterLayoutComponent : CKCompositeComponent {
    WFParameter *_parameter;
    WFVariable *_variable;
    id<WFVariableProvider> _variableProvider;
    id<WFVariableUIDelegate> _variableUIDelegate;
    CKComponent *_controlComponent;
    id<WFComponentNavigationContext> _navigationContext;
    BOOL _chooserCanClear;
    id /* block */ _updateBlock;
}

+ (id)newWithLabel:(id)a0 labelsToAlignTo:(id)a1 parameter:(id)a2 variable:(id)a3 updateBlock:(id /* block */)a4 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; id x6; id x7; })a5 chooserCanClear:(BOOL)a6 variableProvider:(id)a7 variableUIDelegate:(id)a8 navigationContext:(id)a9 controlResistance:(const struct WFCompressionResistance { int x0; double x1; } *)a10 controlComponent:(id)a11;

- (void).cxx_destruct;
- (void)presentTokenChooser:(id)a0;

@end
