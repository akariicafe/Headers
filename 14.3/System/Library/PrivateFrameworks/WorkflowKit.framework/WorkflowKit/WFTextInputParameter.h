@class NSString;

@interface WFTextInputParameter : WFParameter <WFParameterDialogProvider>

@property (copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) long long autocapitalizationType;
@property (readonly, nonatomic) long long autocorrectionType;
@property (readonly, nonatomic) BOOL smartQuotesDisabled;
@property (readonly, nonatomic) BOOL smartDashesDisabled;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic, getter=isMultiline) BOOL multiline;
@property (readonly, nonatomic) unsigned long long hintDisplayMode;
@property (readonly, nonatomic) unsigned long long syntaxHighlightingType;
@property (readonly, nonatomic) BOOL processesIntoContentItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setLocalizedPlaceholder:(id)a0;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 completionHandler:(id /* block */)a2;
- (id)parameterStateFromDialogResponse:(id)a0;
- (id)defaultSerializedRepresentation;
- (BOOL)shouldAlignLabels;
- (id)hintForState:(id)a0;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)a0;

@end
