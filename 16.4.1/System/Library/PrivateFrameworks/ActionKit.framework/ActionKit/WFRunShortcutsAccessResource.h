@interface WFRunShortcutsAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)attemptRecoveryFromErrorMessage;
- (id)associatedAppIdentifier;
- (id)errorReasonForStatus:(unsigned long long)a0;
- (id)importErrorReasonForStatus:(unsigned long long)a0;
- (id)protectedResourceDescription;

@end
