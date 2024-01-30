@interface WFAppendToNoteAction : WFOverridableLinkAction

+ (id)overrideInputParameterName;

- (id)keywords;
- (BOOL)shouldLocalizeValueForSelector:(SEL)a0;
- (id)defaultOutputName;
- (id)descriptionResult;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)remoteExecuteOnPlatforms;
- (id)serializationKeysByParameter;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
