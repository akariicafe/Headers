@interface SAFmfVisibilityStateSet : SADomainCommand

@property (nonatomic) BOOL visible;

+ (id)visibilityStateSet;
+ (id)visibilityStateSetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
