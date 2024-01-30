@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commands;

+ (id)sendCommands;
+ (id)sendCommandsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
