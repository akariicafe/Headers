@interface CDPCALocalSecretReporter : CDPCAReporter

- (id)init;
- (void)didChangeLocalSecret;
- (void)didRemoveLocalSecret;

@end
