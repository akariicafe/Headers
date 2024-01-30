@class NSArray, NSString;

@interface WFEnumerationParameter : WFParameter <WFParameterDialogProvider>

@property (readonly, nonatomic) NSArray *staticPossibleStates;
@property (readonly, nonatomic) NSArray *displayNames;
@property (readonly, nonatomic) BOOL preferParameterValuePicker;
@property (readonly, nonatomic) NSArray *possibleStatesForLocalization;
@property (readonly, nonatomic) BOOL alwaysShowsButton;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) BOOL hidesSubtitleInEditor;
@property (readonly, nonatomic) BOOL hidesAccessoryIconInEditor;
@property (readonly, nonatomic) BOOL liveUpdatesPossibleStatesInEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 completionHandler:(id /* block */)a2;
- (id)parameterStateFromDialogResponse:(id)a0;
- (void)setPossibleStatesFromRemoteSource:(id)a0;
- (id)localizedTitleForButtonWithState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0 inMultipleState:(id)a1;
- (id)localizedLabelForMultipleState:(id)a0;
- (id)localizedLabelForMultipleCompleteState:(id)a0;
- (id)localizedSubtitleLabelForPossibleState:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (BOOL)displaysMultipleValueEditor;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)possibleStatesDidChange;
- (void)startLiveUpdatingPossibleStates;
- (void)stopLiveUpdatingPossibleStates;

@end
