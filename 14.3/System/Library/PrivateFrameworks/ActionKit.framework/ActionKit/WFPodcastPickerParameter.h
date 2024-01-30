@class NSString;

@interface WFPodcastPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)preferParameterValuePicker;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;

@end
