@class SAClockObject;

@interface SAClockAdd : SADomainCommand

@property (retain, nonatomic) SAClockObject *clockToAdd;

+ (id)add;
+ (id)addWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
