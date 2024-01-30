@class NFLazy, NFPromise;

@interface FCAVAssetKeyService : NSObject <FCAVAssetKeyServiceType> {
    NFLazy *_session;
    NFLazy *_requestEncoder;
    NFPromise *_fairPlayBaseURLPromise;
}

- (void)fetchAppCertificateWithCompletionHandler:(id /* block */)a0;
- (void)fetchContentKeyWithURI:(id)a0 spcData:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
