@class NSArray;

@interface SAGetClientState : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *statesToGet;

+ (id)getClientState;
+ (id)getClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
