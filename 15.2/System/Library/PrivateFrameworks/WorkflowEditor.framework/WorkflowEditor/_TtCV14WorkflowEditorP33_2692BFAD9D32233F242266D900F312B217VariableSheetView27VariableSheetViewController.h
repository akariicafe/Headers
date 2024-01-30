@interface _TtCV14WorkflowEditorP33_2692BFAD9D32233F242266D900F312B217VariableSheetView27VariableSheetViewController : UIViewController <WFVariableUIDelegate> {
    void /* unknown type, empty encoding */ _variableSheetIsPresented;
    void /* unknown type, empty encoding */ variableSheet;
    void /* unknown type, empty encoding */ textTokenChooser;
    void /* unknown type, empty encoding */ onShowActionOutputPicker;
    void /* unknown type, empty encoding */ onRevealAction;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowShortcutInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;

@end
