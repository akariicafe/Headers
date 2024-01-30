@class SAIntentGroupSiriKitRemoteExecution, NSString, NSArray, SAIntentGroupSiriKitMetrics, SAIntentGroupSiriKitAppSelectionState, SAIntentGroupSiriKitListPosition, SAPerson, SAIntentGroupParse;

@interface SAIntentGroupRunSiriKitExecutor : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupSiriKitAppSelectionState *appSelectionState;
@property (copy, nonatomic) NSString *confirmationState;
@property (nonatomic) BOOL directAction;
@property (nonatomic) BOOL eyesFree;
@property (copy, nonatomic) NSString *goalID;
@property (retain, nonatomic) SAPerson *identifiedUserMeCard;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSString *interactionType;
@property (nonatomic) BOOL multiUser;
@property (copy, nonatomic) NSArray *parameterMetadata;
@property (copy, nonatomic) NSArray *parameterPrompts;
@property (copy, nonatomic) NSString *parentGoalID;
@property (retain, nonatomic) SAIntentGroupParse *parse;
@property (retain, nonatomic) SAIntentGroupSiriKitListPosition *readingListPosition;
@property (retain, nonatomic) SAIntentGroupSiriKitRemoteExecution *remoteExecution;
@property (nonatomic) BOOL requiresConditionalMultiUserGrounding;
@property (copy, nonatomic) NSString *sessionHandOffContinuityID;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (nonatomic) BOOL textToSpeechEnabled;
@property (copy, nonatomic) NSString *userInitiatedAction;
@property (copy, nonatomic) NSString *usoVerb;
@property (nonatomic) BOOL voiceTriggerEnabled;

+ (id)runSiriKitExecutor;
+ (id)runSiriKitExecutorWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
