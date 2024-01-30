@class NSArray;

@interface WFAccountPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) id observer;
@property (readonly, nonatomic) Class accountClass;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isHidden;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;
- (id)accountWithName:(id)a0;

@end
