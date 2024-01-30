@class NSDictionary;

@interface SACFFlowCommand : SACFAbstractClientCommand

@property (copy, nonatomic) NSDictionary *jsDialogScripts;

+ (id)flowCommand;
+ (id)flowCommandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
