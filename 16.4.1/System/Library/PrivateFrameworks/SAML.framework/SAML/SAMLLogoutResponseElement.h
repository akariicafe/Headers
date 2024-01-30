@interface SAMLLogoutResponseElement : SAMLResponseElement

- (id)assertions;
- (BOOL)assertionMeetsConditions:(id *)a0;

@end
