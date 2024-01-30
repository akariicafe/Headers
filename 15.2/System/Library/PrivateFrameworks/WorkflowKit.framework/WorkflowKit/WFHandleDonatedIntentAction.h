@class NSString, INIntentDescriptor, INIntent;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {
    INIntentDescriptor *_intentDescriptor;
}

@property (readonly, nonatomic) BOOL forceExecutionOnPhone;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (retain, nonatomic) INIntent *intent;

+ (id)intentActionWithShortcut:(id)a0 forceExecutionOnPhone:(BOOL)a1 groupIdentifier:(id)a2 error:(id *)a3;

- (id)localizedName;
- (id)appIdentifier;
- (id)intentDescription;
- (long long)intentCategory;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (id)slots;
- (id)localizedSubtitle;
- (id)name;
- (id)serializedParameters;
- (id)metricsIdentifier;
- (void)initializeParameters;
- (id)localizedDescriptionSummary;
- (id)initWithIntent:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (void)continueInAppWithCompletionHandler:(id /* block */)a0;
- (id)initWithInteraction:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (id)intentDescriptor;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)executorWithIntent:(id)a0 groupIdentifier:(id)a1;
- (void)setIntentDescriptor:(id)a0;
- (id)localizedKeyParameterDisplayName;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)parameterSummaryDefinition;

@end
