@class NSArray;

@interface WFAirDropVisibilityParameter : WFEnumerationParameter

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) id defaultSerializedRepresentation;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;

@end
