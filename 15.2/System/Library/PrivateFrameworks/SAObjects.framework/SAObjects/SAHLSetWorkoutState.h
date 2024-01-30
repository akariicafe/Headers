@class SAHLWorkoutState;

@interface SAHLSetWorkoutState : SADomainCommand

@property (retain, nonatomic) SAHLWorkoutState *targetWorkoutState;

+ (id)setWorkoutState;
+ (id)setWorkoutStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
