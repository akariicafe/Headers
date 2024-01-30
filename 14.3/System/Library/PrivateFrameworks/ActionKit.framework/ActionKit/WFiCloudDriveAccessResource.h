@interface WFiCloudDriveAccessResource : WFAccessResource

+ (BOOL)mustBeAvailableForDisplay;
+ (BOOL)isSystemResource;

- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)a0;

@end
