@class NSArray, NSNumber;

@interface SAUIDelayedActionCommand : SADomainCommand

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *timerValue;

+ (id)delayedActionCommand;
+ (id)delayedActionCommandWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
