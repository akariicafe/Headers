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

- (id)initWithIntent:(id)a0;
- (id)localizedName;
- (id)intentDescription;
- (id)appIdentifier;
- (id)localizedSubtitle;
- (long long)intentCategory;
- (void).cxx_destruct;
- (id)name;
- (id)serializedParameters;
- (id)slots;
- (id)metricsIdentifier;
- (void)continueInAppWithCompletionHandler:(id /* block */)a0;
- (id)executorWithIntent:(id)a0 groupIdentifier:(id)a1;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)initWithIntent:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (id)initWithInteraction:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (void)initializeParameters;
- (id)intentDescriptor;
- (id)localizedDescriptionSummary;
- (id)localizedKeyParameterDisplayName;
- (id)parameterSummaryDefinition;
- (void)setIntentDescriptor:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
