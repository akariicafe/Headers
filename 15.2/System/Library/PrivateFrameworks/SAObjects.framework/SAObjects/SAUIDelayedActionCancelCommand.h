@class NSString;

@interface SAUIDelayedActionCancelCommand : SADomainCommand

@property (copy, nonatomic) NSString *delayedActionAceId;

+ (id)delayedActionCancelCommand;
+ (id)delayedActionCancelCommandWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
