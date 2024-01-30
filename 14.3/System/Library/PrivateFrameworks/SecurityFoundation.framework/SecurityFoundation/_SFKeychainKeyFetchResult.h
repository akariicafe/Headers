@class _SFSymmetricKey;

@interface _SFKeychainKeyFetchResult : _SFKeychainFetchResult {
    id _keyFetchResult;
}

@property (readonly) _SFSymmetricKey *value;

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)a0 resultHandler:(id /* block */)a1;

@end
