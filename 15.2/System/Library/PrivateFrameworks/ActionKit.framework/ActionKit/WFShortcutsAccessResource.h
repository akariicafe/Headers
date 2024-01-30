@interface WFShortcutsAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;
- (id)attemptRecoveryFromErrorMessage;
- (id)errorReasonForStatus:(unsigned long long)a0;
- (id)importErrorReasonForStatus:(unsigned long long)a0;

@end
