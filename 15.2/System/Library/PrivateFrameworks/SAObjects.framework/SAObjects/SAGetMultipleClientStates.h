@class NSArray;

@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientStateGetters;

+ (id)getMultipleClientStates;
+ (id)getMultipleClientStatesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
