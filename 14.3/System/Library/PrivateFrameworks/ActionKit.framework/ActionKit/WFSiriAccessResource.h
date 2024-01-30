@interface WFSiriAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (unsigned long long)globalLevelStatus;
- (unsigned long long)workflowLevelStatus;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)a0;

@end
