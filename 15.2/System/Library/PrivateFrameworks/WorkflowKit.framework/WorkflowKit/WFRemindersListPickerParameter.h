@class NSArray;

@interface WFRemindersListPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) id defaultSerializedListRepresentation;
@property (retain, nonatomic) NSArray *listStates;
@property (readonly, nonatomic) BOOL allowsAllLists;

- (id)possibleStates;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)storeDidChange;
- (void)reloadStates;

@end
