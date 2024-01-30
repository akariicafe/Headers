@class NSArray, INCodableEnumAttribute, NSDictionary;

@interface WFCustomIntentEnumerationParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) INCodableEnumAttribute *enumAttribute;
@property (readonly, nonatomic) NSDictionary *enumNamesToKeys;
@property (readonly, nonatomic) NSDictionary *keysToEnumNames;
@property (readonly, nonatomic) NSDictionary *enumNamesToLabels;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
