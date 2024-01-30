@class NSString, INStringLocalizer, INCodableAttribute;
@protocol WFCustomIntentDynamicEnumerationDataSource;

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFParameterValuePickable, WFCodableAttributeBackedParameter>

@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFCustomIntentDynamicEnumerationDataSource> dataSource;
@property (retain, nonatomic) INCodableAttribute *codableAttribute;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;
@property (readonly, nonatomic) NSString *localizedConfigurationPromptDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessoryImageForPossibleState:(id)a0;
- (BOOL)displaysMultipleValueEditor;
- (void)getStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hidesSubtitleInEditor;
- (id)localizedSubtitleLabelForPossibleState:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (id)wf_pickerLocalizedImageForState:(id)a0;
- (id)wf_pickerLocalizedSubtitleForState:(id)a0;
- (id)wf_pickerLocalizedTitleForState:(id)a0;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;

@end
