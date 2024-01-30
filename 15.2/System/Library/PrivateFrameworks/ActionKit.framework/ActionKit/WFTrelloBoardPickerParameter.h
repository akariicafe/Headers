@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) id observer;
@property (readonly, nonatomic) NSArray *possibleStates;

- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (id)defaultSerializedRepresentation;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)updateBoards;

@end
