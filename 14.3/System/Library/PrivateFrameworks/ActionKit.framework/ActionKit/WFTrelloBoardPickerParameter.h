@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) id observer;
@property (readonly, nonatomic) NSArray *possibleStates;

- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)updateBoards;

@end
