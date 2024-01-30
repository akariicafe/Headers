@class NSString, WFMediaRoutePicker;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFParameterValuePickable, WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver>

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
@property (retain, nonatomic) WFMediaRoutePicker *routePicker;
@property (readonly, nonatomic) long long routeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (Class)singleStateClass;
- (BOOL)preferParameterValuePicker;
- (BOOL)parameterStateIsValid:(id)a0;
- (BOOL)hidesAccessoryIconInEditor;
- (BOOL)liveUpdatesPossibleStatesInEditor;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryImageForPossibleState:(id)a0;
- (void)startLiveUpdatingPossibleStates;
- (void)stopLiveUpdatingPossibleStates;
- (void)routePickerDidUpdateAvailableRoutes:(id)a0;
- (void)startDiscoveringRoutes;
- (void)stopDiscoveringRoutes;
- (BOOL)shouldDefaultToLocalDeviceEndpoint;
- (id)sortedStatesForAvailableRoutes:(id)a0;

@end
