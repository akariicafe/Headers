@class NSArray;

@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientStateGetters;

+ (id)getMultipleClientStates;
+ (id)getMultipleClientStatesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
