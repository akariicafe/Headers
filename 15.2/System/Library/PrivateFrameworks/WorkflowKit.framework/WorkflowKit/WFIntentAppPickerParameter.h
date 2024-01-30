@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter

@property (readonly, nonatomic) NSString *intentName;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (BOOL)alwaysShowsButton;
- (void)possibleStatesDidChange;

@end
