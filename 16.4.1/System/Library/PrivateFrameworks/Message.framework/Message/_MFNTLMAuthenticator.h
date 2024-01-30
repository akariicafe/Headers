@interface _MFNTLMAuthenticator : ECSASLAuthenticator {
    struct NtlmGenerator { } *_ntlmGeneratorRef;
    int _ntlmError;
}

- (void)dealloc;
- (id)responseForServerData:(id)a0;
- (void)setAuthenticationState:(long long)a0;

@end
