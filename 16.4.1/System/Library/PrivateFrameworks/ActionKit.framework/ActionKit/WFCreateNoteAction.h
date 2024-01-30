@interface WFCreateNoteAction : WFLinkCreateEntityAction

+ (id)overrideInputParameterName;

- (id)keywords;
- (id)entityName;
- (BOOL)shouldLocalizeValueForSelector:(SEL)a0;
- (id)localizedKeyParameterDisplayName;
- (BOOL)openWhenRunParameterIsHidden;
- (unsigned long long)outputDisclosureLevel;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)shouldOverrideParameterSummary;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
