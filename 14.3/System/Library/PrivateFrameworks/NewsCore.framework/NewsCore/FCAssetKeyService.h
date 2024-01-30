@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType>

@property (readonly, nonatomic) NFLazy *session;
@property (readonly, nonatomic) NFLazy *requestEncoder;
@property (readonly, nonatomic) NFPromise *endpointURLPromise;

- (id)initWithConfigurationManager:(id)a0;
- (void).cxx_destruct;
- (void)_performHTTPRequestWithData:(id)a0 completion:(id /* block */)a1;
- (void)fetchWrappingKeysWithIDs:(id)a0 completionHandler:(id /* block */)a1;

@end
