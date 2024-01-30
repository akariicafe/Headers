@class NFLazy, NFPromise;

@interface FCAVAssetKeyService : NSObject <FCAVAssetKeyServiceType>

@property (readonly, nonatomic) NFLazy *session;
@property (readonly, nonatomic) NFLazy *requestEncoder;
@property (readonly, nonatomic) NFPromise *fairPlayBaseURLPromise;

- (id)initWithConfigurationManager:(id)a0;
- (void)fetchAppCertificateWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_errorForBadRequestWithResponseData:(id)a0 URL:(id)a1;
- (void)_performHTTPRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchContentKeyWithURI:(id)a0 spcData:(id)a1 completionHandler:(id /* block */)a2;

@end
