@interface WorkflowEditor.ParameterValuePickerViewController : UIViewController {
    void /* unknown type, empty encoding */ parameter;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ initialValue;
    void /* unknown type, empty encoding */ allowsMultipleSelection;
    void /* unknown type, empty encoding */ allowsVariables;
    void /* unknown type, empty encoding */ hostingViewController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ variableProvider;
@property (nonatomic, weak) void /* unknown type, empty encoding */ variableUIDelegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithParameter:(id)a0 allowsVariables:(BOOL)a1 allowsMultipleSelection:(BOOL)a2 initialCollection:(id)a3 currentState:(id)a4;

@end
