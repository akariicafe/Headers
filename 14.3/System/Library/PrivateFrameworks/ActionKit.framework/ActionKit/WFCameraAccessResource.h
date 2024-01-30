@interface WFCameraAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)a0;

@end
