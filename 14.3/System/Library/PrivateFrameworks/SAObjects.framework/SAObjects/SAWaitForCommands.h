@class NSArray;

@interface SAWaitForCommands : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commandAceIds;

+ (id)waitForCommands;
+ (id)waitForCommandsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
