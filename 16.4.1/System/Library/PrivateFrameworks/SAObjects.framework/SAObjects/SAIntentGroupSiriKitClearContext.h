@class NSString;

@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)siriKitClearContext;
+ (id)siriKitClearContextWithDictionary:(id)a0 context:(id)a1;
+ (id)siriKitClearContextWithReason:(id)a0;

- (id)initWithReason:(id)a0;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
