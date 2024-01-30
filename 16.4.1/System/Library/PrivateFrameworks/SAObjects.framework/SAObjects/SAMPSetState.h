@interface SAMPSetState : SADomainCommand

@property (nonatomic) int state;

+ (id)setStateWithDictionary:(id)a0 context:(id)a1;
+ (id)setState;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
