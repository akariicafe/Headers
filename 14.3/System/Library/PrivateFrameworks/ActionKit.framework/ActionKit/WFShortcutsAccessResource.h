@interface WFShortcutsAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtLevel:(unsigned long long)a0 withUserInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)workflowLevelPromptTemplate;
- (id)attemptRecoveryFromGlobalLevelErrorMessage;

@end
