@class NSArray;

@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) BOOL supportsLanguageDetection;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;

@end
