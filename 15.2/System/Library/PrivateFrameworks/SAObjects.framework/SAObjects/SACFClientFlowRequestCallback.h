@class SAIntentGroupSiriKitMetrics, NSArray, NSString, NSNumber, SASVSystemDialogActOutput;

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *applicationContextObjects;
@property (copy, nonatomic) NSArray *conversationStateAttachments;
@property (copy, nonatomic) NSArray *dictationPromptAbortValues;
@property (copy, nonatomic) NSString *dictationPromptTargetDomain;
@property (copy, nonatomic) NSArray *dictationPromptTargetNodes;
@property (copy, nonatomic) NSArray *disambiguationPromptAbortValues;
@property (copy, nonatomic) NSNumber *disambiguationPromptAmbiguityId;
@property (copy, nonatomic) NSArray *disambiguationPromptResponseTargets;
@property (copy, nonatomic) NSString *disambiguationPromptTargetDomain;
@property (copy, nonatomic) NSArray *displayHintsAsJson;
@property (copy, nonatomic) NSString *nlInput;
@property (copy, nonatomic) NSNumber *objectDisambiguation;
@property (nonatomic) BOOL shouldResetFlowTaskState;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (retain, nonatomic) SASVSystemDialogActOutput *systemDialogActOutput;
@property (copy, nonatomic) NSArray *weightedPromptAbortValues;
@property (copy, nonatomic) NSArray *weightedPromptResponseOptions;
@property (copy, nonatomic) NSArray *weightedPromptResponseTargets;
@property (copy, nonatomic) NSNumber *weightedPromptStrict;
@property (copy, nonatomic) NSString *weightedPromptTargetDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientFlowRequestCallback;
+ (id)clientFlowRequestCallbackWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
