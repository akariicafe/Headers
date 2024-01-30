@class NSString;

@interface WFAppPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) long long appSearchType;
@property (readonly, nonatomic) BOOL useLegacyIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefinition:(id)a0;
- (id)enumeration:(id)a0 accessoryImageForPossibleState:(id)a1;
- (id)enumeration:(id)a0 accessoryIconForPossibleState:(id)a1;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (Class)singleStateClass;
- (id)stateForRecord:(id)a0;

@end
