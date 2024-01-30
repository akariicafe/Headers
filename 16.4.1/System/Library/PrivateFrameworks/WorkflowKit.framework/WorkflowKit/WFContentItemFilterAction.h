@class NSString, WFContentQuery;

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) WFContentQuery *query;
@property (readonly, nonatomic) struct _WFContentSlice { unsigned long long x0; unsigned long long x1; } slice;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keywords;
- (id)localizedName;
- (id)descriptionDictionary;
- (id)parameterDefinitions;
- (id)auxiliaryButton;
- (BOOL)canHandleInputOfContentClasses:(id)a0 withSupportedClasses:(id)a1;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)hasMultipleFilterConditions;
- (void)initializeParameters;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (id)localizedParameterSummaryStringForFilter;
- (id)localizedParameterSummaryStringForFilterWithFilterConditions;
- (id)localizedParameterSummaryStringForFilterWithMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFind;
- (id)localizedParameterSummaryStringForFindWithFilterConditions;
- (id)localizedParameterSummaryStringForFindWithMultipleFilterConditions;
- (id)outputContentClasses;
- (unsigned long long)parameterCollapsingBehavior;
- (id)parameterStateForKey:(id)a0;
- (id)parameterSummary;
- (id)possibleStatesForEnumeration:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runFilterWithInput:(id)a0 query:(id)a1;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)sortablePropertyDisplayNames;
- (id)sortablePropertyNames;
- (id)tableTemplate;
- (void)updateCompoundParameterVisibility;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;

@end
