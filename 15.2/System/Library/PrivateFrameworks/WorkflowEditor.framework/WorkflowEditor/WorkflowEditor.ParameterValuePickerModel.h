@interface WorkflowEditor.ParameterValuePickerModel : NSObject <WFParameterEventObserver> {
    void /* unknown type, empty encoding */ _results;
    void /* unknown type, empty encoding */ _prompt;
    void /* unknown type, empty encoding */ _selectedState;
    void /* unknown type, empty encoding */ userInput;
    void /* unknown type, empty encoding */ parameter;
    void /* unknown type, empty encoding */ allowsMultipleSelection;
    void /* unknown type, empty encoding */ allowedVariableTypes;
    void /* unknown type, empty encoding */ variableProvider;
    void /* unknown type, empty encoding */ variableUIDelegate;
    void /* unknown type, empty encoding */ onPick;
    void /* unknown type, empty encoding */ onSelectMagicVariable;
    void /* unknown type, empty encoding */ onCancel;
    void /* unknown type, empty encoding */ onClear;
    void /* unknown type, empty encoding */ defaultCollection;
    void /* unknown type, empty encoding */ cachedValues;
    void /* unknown type, empty encoding */ reloadDebouncer;
}

- (void)_reload;
- (void).cxx_destruct;
- (id)init;
- (void)parameterAttributesDidChange:(id)a0;

@end
