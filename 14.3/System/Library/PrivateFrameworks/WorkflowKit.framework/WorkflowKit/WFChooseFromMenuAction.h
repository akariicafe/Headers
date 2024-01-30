@class NSString, WFVariableString;

@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate>

@property (readonly, nonatomic) long long latestMenuChoice;
@property (copy, nonatomic) WFVariableString *itemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serializedParameters;
- (id)name;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)inputRequired;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (BOOL)inputPassthrough;
- (id)createAccompanyingActions;
- (id)inputSourceInWorkflow:(id)a0;
- (id)defaultOutputName;
- (void)variableDidChange:(id)a0;
- (void)arrayParameter:(id)a0 itemWasAppended:(id)a1;
- (void)arrayParameter:(id)a0 itemWasMovedFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)arrayParameter:(id)a0 itemWasUpdatedAtIndex:(unsigned long long)a1 toValue:(id)a2;
- (void)arrayParameter:(id)a0 confirmDeletionOfItemAtIndex:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)newIntermediaryActionWithMenuItemTitle:(id)a0;
- (void)showNotificationWithInput:(id)a0;
- (void)showAlertWithInput:(id)a0;
- (id)intermediaryActions;
- (unsigned long long)numberOfActionsIncludedWithAction:(id)a0;

@end
