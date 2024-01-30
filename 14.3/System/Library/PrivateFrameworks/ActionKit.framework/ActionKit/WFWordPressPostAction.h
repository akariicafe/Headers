@class NSString;

@interface WFWordPressPostAction : WFAction <WFDynamicEnumerationDataSource, WFDynamicTagFieldDataSource>

@property (retain, nonatomic) id observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)suggestedTagsForTagField:(id)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)updatePossibleStates;
- (void)generateHTMLFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAccountMetadata;
- (void)updateHiddenStates;

@end
