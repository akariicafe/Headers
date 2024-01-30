@class NSArray, NSString, NSSet, NSIndexSet, WFVariable, WFAlert;
@protocol WFUIKitUserInterface;

@interface WFTextTokenChooser : NSObject

@property (retain, nonatomic) WFAlert *presentedAlert;
@property (copy, nonatomic) NSArray *auxiliaryButtons;
@property (weak, nonatomic) id<WFUIKitUserInterface> userInterface;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *noChoicesMessage;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (copy, nonatomic) NSArray *additionalButtons;
@property (nonatomic) BOOL showsClearButton;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL prefersItemPickerSheetPresentation;
@property (nonatomic) long long maximumSelectableItemsCount;
@property (retain, nonatomic) WFVariable *selectedVariable;
@property (retain, nonatomic) NSIndexSet *selectedButtonIndexes;
@property (copy, nonatomic) id /* block */ choiceHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (id)init;
- (void).cxx_destruct;
- (void)dismissWithCompletionHandler:(id /* block */)a0;
- (void)presentWithVariableProvider:(id)a0 variableUIDelegate:(id)a1 userInterface:(id)a2 fromSource:(id)a3;
- (void)updateButtonsInAlert:(id)a0;
- (id)alertButtonForVariable:(id)a0 selected:(BOOL)a1;

@end
