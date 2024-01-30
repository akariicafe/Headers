@class NSString, NSArray;

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (nonatomic) BOOL backgroundLaunch;
@property (copy, nonatomic) NSString *launchId;
@property (copy, nonatomic) NSArray *parameters;
@property (copy, nonatomic) NSString *utterance;

+ (id)intentInvocationResponse;
+ (id)intentInvocationResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
