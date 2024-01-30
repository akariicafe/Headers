@class NSString;

@interface WFVPNPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefinition:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedSubtitleLabelForPossibleState:(id)a1;
- (BOOL)enumerationAllowsMultipleValues:(id)a0;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (Class)singleStateClass;

@end
