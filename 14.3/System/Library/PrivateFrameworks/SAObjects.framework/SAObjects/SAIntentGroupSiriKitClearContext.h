@class NSString;

@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)siriKitClearContext;
+ (id)siriKitClearContextWithDictionary:(id)a0 context:(id)a1;
+ (id)siriKitClearContextWithReason:(id)a0;

- (id)groupIdentifier;
- (id)initWithReason:(id)a0;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
