@interface WFPhotoAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
