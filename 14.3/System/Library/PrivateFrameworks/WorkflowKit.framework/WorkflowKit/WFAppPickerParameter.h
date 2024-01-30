@interface WFAppPickerParameter : WFParameter

@property (readonly, nonatomic) long long appSearchType;

- (id)localizedPlaceholder;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (id)localizedLabelForState:(id)a0;
- (id)accessoryIconForState:(id)a0;
- (id)stateForApp:(id)a0;

@end
