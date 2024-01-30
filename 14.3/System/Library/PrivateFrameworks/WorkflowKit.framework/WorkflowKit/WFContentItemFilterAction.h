@class NSString, WFContentQuery;

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) WFContentQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keywords;
- (id)descriptionDictionary;
- (id)localizedName;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (BOOL)inputRequired;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (BOOL)canHandleInputOfContentClasses:(id)a0 withSupportedClasses:(id)a1;
- (id)parameterSummary;
- (id)inputParameterKey;
- (id)parameterDefinitions;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (unsigned long long)parameterCollapsingBehavior;
- (id)tableTemplate;
- (id)localizedParameterSummaryStringForFind;
- (id)localizedParameterSummaryStringForFindWithFilterConditions;
- (id)localizedParameterSummaryStringForFilter;
- (id)localizedParameterSummaryStringForFilterWithFilterConditions;
- (void)runAsynchronouslyWithInput:(id)a0 query:(id)a1;

@end
