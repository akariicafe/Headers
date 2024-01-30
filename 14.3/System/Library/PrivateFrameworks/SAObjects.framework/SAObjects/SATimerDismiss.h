@class NSArray;

@interface SATimerDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *timerIds;

+ (id)dismissWithDictionary:(id)a0 context:(id)a1;
+ (id)dismiss;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
