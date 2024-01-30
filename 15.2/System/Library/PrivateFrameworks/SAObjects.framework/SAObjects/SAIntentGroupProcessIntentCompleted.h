@class SAIntentGroupHandleIntentCompleted, NSString, SAIntentGroupConfirmIntentCompleted, SAIntentGroupBatchSlotResolutionResult;

@interface SAIntentGroupProcessIntentCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAIntentGroupBatchSlotResolutionResult *batchSlotResolutionResult;
@property (retain, nonatomic) SAIntentGroupConfirmIntentCompleted *confirmIntentCompleted;
@property (retain, nonatomic) SAIntentGroupHandleIntentCompleted *handleIntentCompleted;
@property (copy, nonatomic) NSString *lastAttemptedStep;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processIntentCompleted;
+ (id)processIntentCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
