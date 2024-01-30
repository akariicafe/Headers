@class NSString, NSArray;

@interface WFEnumerationParameter : WFParameter <WFParameterValuePickable, WFParameterDialogProvider>

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
@property (readonly, nonatomic) NSArray *staticPossibleStates;
@property (readonly, nonatomic) NSArray *displayNames;
@property (readonly, nonatomic) NSArray *symbolNames;
@property (readonly, nonatomic) BOOL providesLocalizedValuesForSummary;
@property (readonly, nonatomic) BOOL preferParameterValuePicker;
@property (readonly, nonatomic) NSArray *possibleStatesForLocalization;
@property (readonly, nonatomic) BOOL alwaysShowsButton;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) BOOL hidesSubtitleInEditor;
@property (readonly, nonatomic) BOOL hidesAccessoryIconInEditor;
@property (readonly, nonatomic) BOOL liveUpdatesPossibleStatesInEditor;
@property (readonly, nonatomic) NSString *selectionType;
@property (readonly, nonatomic) NSString *tableViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)accessoryIconForPossibleState:(id)a0;
- (id)localizedLabelForMultipleCompleteState:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)parameterStateFromDialogResponse:(id)a0;
- (void)setPossibleStatesFromRemoteSource:(id)a0;
- (id)localizedTitleForButtonWithState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0 inMultipleState:(id)a1;
- (id)localizedLabelForMultipleState:(id)a0;
- (id)localizedSubtitleLabelForPossibleState:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)accessoryImageForPossibleState:(id)a0;
- (BOOL)displaysMultipleValueEditor;
- (void)possibleStatesDidChange;
- (void)startLiveUpdatingPossibleStates;
- (void)stopLiveUpdatingPossibleStates;
- (id)wf_pickerLocalizedIconForState:(id)a0;
- (void)wf_loadStatesWithSearchTerm:(id)a0 completionHandler:(id /* block */)a1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (id)wf_pickerLocalizedTitleForState:(id)a0;
- (id)wf_pickerLocalizedSubtitleForState:(id)a0;
- (id)wf_pickerLocalizedImageForState:(id)a0;

@end
