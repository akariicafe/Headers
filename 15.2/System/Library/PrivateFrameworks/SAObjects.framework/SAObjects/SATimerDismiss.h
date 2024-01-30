@class NSArray;

@interface SATimerDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *timerIds;

+ (id)dismiss;
+ (id)dismissWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
