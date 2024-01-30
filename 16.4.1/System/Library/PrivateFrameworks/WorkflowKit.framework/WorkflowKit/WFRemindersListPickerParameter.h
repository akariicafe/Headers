@class NSArray;

@interface WFRemindersListPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) id defaultSerializedListRepresentation;
@property (retain, nonatomic) NSArray *listStates;
@property (readonly, nonatomic) BOOL allowsAllLists;

- (id)possibleStates;
- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)reloadStates;
- (Class)singleStateClass;
- (void)storeDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
