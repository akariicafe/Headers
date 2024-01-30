@class _SFIdentity;

@interface _SFKeychainIdentityFetchResult : _SFKeychainFetchResult {
    id _identityFetchResult;
}

@property (readonly) _SFIdentity *value;

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)a0 resultHandler:(id /* block */)a1;

@end
