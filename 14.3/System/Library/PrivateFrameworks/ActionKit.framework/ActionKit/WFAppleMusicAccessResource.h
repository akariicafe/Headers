@interface WFAppleMusicAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
