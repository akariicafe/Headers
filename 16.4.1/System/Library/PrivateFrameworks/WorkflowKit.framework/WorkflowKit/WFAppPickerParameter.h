@class NSString;
@protocol WFAppListProvider;

@interface WFAppPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) long long appSearchType;
@property (readonly, nonatomic) BOOL useLegacyIdentifiers;
@property (weak, nonatomic) id<WFAppListProvider> appListProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)stateForRecord:(id)a0;
- (id)appEnumerator;
- (id)enumeration:(id)a0 accessoryIconForPossibleState:(id)a1;
- (id)enumeration:(id)a0 accessoryImageForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)a0;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;

@end
