@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *useCaseId;

+ (id)supportedIntentResponse;
+ (id)supportedIntentResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
