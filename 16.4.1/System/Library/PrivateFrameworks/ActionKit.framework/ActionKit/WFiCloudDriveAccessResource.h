@interface WFiCloudDriveAccessResource : WFAccessResource

+ (BOOL)isSystemResource;
+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (void)dealloc;
- (unsigned long long)status;
- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)errorReasonForStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)a0;
- (id)importErrorReasonForStatus:(unsigned long long)a0;
- (id)protectedResourceDescription;

@end
