@class NSArray;

@interface SACFRemoveScriptCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *scriptIdentifiers;

+ (id)removeScriptCommand;
+ (id)removeScriptCommandWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
