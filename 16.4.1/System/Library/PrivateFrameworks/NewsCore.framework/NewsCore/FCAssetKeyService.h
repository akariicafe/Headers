@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType> {
    NFLazy *_session;
    NFLazy *_requestEncoder;
    NFPromise *_endpointURLPromise;
}

- (void).cxx_destruct;
- (void)fetchWrappingKeysWithIDs:(id)a0 completionHandler:(id /* block */)a1;

@end
