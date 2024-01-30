@class NSString;

@interface WFTextInputParameter : WFParameter <WFParameterDialogProvider>

@property (copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) NSString *returnKeyType;
@property (readonly, copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) long long autocapitalizationType;
@property (readonly, nonatomic) long long autocorrectionType;
@property (readonly, nonatomic) BOOL autoPeriodsDisabled;
@property (readonly, nonatomic) BOOL smartQuotesDisabled;
@property (readonly, nonatomic) BOOL smartDashesDisabled;
@property (readonly, nonatomic) BOOL textReplacementDisabled;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic, getter=isMultiline) BOOL multiline;
@property (readonly, nonatomic, getter=isMonospace) BOOL monospace;
@property (readonly, nonatomic) unsigned long long hintDisplayMode;
@property (readonly, nonatomic) unsigned long long syntaxHighlightingType;
@property (readonly, nonatomic) BOOL processesIntoContentItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLocalizedPlaceholder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)parameterStateFromDialogResponse:(id)a0;
- (id)defaultSerializedRepresentation;
- (BOOL)shouldAlignLabels;
- (id)hintForState:(id)a0;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)a0;

@end
