@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter

@property (readonly, nonatomic) NSString *intentName;
@property (readonly, nonatomic) BOOL includesUserActivityBasedApps;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)possibleStatesDidChange;
- (BOOL)alwaysShowsButton;

@end
