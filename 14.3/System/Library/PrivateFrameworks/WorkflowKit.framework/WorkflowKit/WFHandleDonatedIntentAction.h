@class NSString, INIntentExecutionInfo, INIntent;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction

@property (readonly, nonatomic) BOOL forceExecutionOnPhone;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) INIntentExecutionInfo *resolvedExecutionInfo;
@property (retain, nonatomic) INIntent *intent;

+ (id)intentActionWithShortcut:(id)a0 forceExecutionOnPhone:(BOOL)a1 groupIdentifier:(id)a2 error:(id *)a3;

- (long long)intentCategory;
- (id)intentDescription;
- (id)appIdentifier;
- (void).cxx_destruct;
- (id)slots;
- (id)localizedSubtitle;
- (id)localizedName;
- (id)serializedParameters;
- (id)name;
- (id)initWithIntent:(id)a0;
- (id)metricsIdentifier;
- (void)continueInAppWithCompletionHandler:(id /* block */)a0;
- (void)initializeParameters;
- (id)localizedDescriptionSummary;
- (id)initWithIntent:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (id)initWithInteraction:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)createResourceManager;
- (id)executorWithIntent:(id)a0 groupIdentifier:(id)a1;
- (id)localizedKeyParameterDisplayName;

@end
