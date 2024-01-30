@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupResolveIntentSlotCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property (copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolveIntentSlotCompleted;
+ (id)resolveIntentSlotCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
