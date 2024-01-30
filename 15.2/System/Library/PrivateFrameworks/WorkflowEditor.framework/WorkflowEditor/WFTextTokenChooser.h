@class NSArray, NSString, NSSet, NSIndexSet, WFVariable, WFAlert;
@protocol WFUIKitUserInterface;

@interface WFTextTokenChooser : NSObject

@property (copy, nonatomic) NSArray *auxiliaryButtons;
@property (retain, nonatomic) WFAlert *presentedAlert;
@property (weak, nonatomic) id<WFUIKitUserInterface> userInterface;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *noChoicesMessage;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (copy, nonatomic) NSArray *additionalButtons;
@property (nonatomic) BOOL showsClearButton;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) long long maximumSelectableItemsCount;
@property (retain, nonatomic) WFVariable *selectedVariable;
@property (retain, nonatomic) NSIndexSet *selectedButtonIndexes;
@property (copy, nonatomic) id /* block */ choiceHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletionHandler:(id /* block */)a0;
- (void)presentWithVariableProvider:(id)a0 variableUIDelegate:(id)a1 presentationAnchor:(id)a2;
- (BOOL)displaysAnyVariablesWithAllowedVariableTypes:(id)a0 variableProvider:(id)a1 variableUIDelegate:(id)a2;
- (BOOL)shouldShowVariable:(id)a0 allowedVariableTypes:(id)a1 variableProvider:(id)a2 variableUIDelegate:(id)a3;
- (void)presentMenuFromPresentationAnchor:(id)a0;
- (void)updateButtonsInPresentedView;
- (void)updateButtonsInAlert:(id)a0;
- (id)textTokenChooserButtonForVariable:(id)a0 selected:(BOOL)a1;

@end
