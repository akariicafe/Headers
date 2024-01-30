@interface WFSpeechRecognitionAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)icon;
- (id)name;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)a0;

@end
