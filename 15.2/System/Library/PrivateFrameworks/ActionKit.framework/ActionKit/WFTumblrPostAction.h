@class TMAPIClient, NSString;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) TMAPIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)initializeParameters;
- (id)contentDestinationWithError:(id *)a0;
- (id)inputContentClasses;
- (id)generatedResourceNodes;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)inputsMultipleItems;
- (void)openFiles:(id)a0;
- (void)openPostWithType:(id)a0 withParameters:(id)a1;
- (void)updateTagsParameterHidden;

@end
