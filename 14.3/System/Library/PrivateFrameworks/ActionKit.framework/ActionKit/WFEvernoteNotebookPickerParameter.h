@class NSArray, WFEvernoteAccessResource;

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource;

+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)a0;
- (void)updateNotebooks;

@end
