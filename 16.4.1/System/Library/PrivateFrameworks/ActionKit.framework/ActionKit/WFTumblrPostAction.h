@class TMAPIClient, NSString;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) TMAPIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contentDestinationWithError:(id *)a0;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)generatedResourceNodes;
- (void)initializeParameters;
- (id)inputContentClasses;
- (BOOL)inputsMultipleItems;
- (id)possibleStatesForEnumeration:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)openFiles:(id)a0;
- (void)openPostWithType:(id)a0 withParameters:(id)a1;
- (void)updateTagsParameterHidden;

@end
