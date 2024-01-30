@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commands;

+ (id)sendCommands;
+ (id)sendCommandsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
