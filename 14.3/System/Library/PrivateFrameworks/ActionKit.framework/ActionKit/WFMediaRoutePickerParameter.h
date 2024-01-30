@class NSString, WFMediaRoutePicker;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver>

@property (retain, nonatomic) WFMediaRoutePicker *routePicker;
@property (readonly, nonatomic) long long routeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (BOOL)hidesAccessoryIconInEditor;
- (BOOL)preferParameterValuePicker;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)startLiveUpdatingPossibleStates;
- (void)stopLiveUpdatingPossibleStates;
- (BOOL)liveUpdatesPossibleStatesInEditor;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)routePickerDidUpdateAvailableRoutes:(id)a0;
- (void)startDiscoveringRoutes;
- (void)stopDiscoveringRoutes;
- (BOOL)shouldDefaultToLocalDeviceEndpoint;
- (id)sortedStatesForAvailableRoutes:(id)a0;

@end
