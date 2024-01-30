@class SFKeychainData;

@interface SFKeychainDataFetchResult : _SFKeychainFetchResult {
    id _dataFetchResult;
}

@property (readonly) SFKeychainData *value;

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)a0 resultHandler:(id /* block */)a1;

@end
