@interface WFSpeechRecognitionAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)icon;
- (id)name;
- (id)protectedResourceDescription;
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)a0;

@end
