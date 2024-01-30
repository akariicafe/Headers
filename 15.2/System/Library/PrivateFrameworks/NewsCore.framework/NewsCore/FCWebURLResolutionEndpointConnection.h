@class NBURLHasher, NFLazy, NBURLCanonicalizer, NSURL, NBHashBucketer;
@protocol FCCoreConfigurationManager;

@interface FCWebURLResolutionEndpointConnection : NSObject <FCWebURLResolutionEndpointConnection>

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, nonatomic) NFLazy *lazyStoreFrontIDPromise;
@property (readonly, copy, nonatomic) NSURL *cachesDirectoryURL;
@property (readonly, nonatomic) NBURLCanonicalizer *canonicalizer;
@property (readonly, nonatomic) NBURLHasher *hasher;
@property (readonly, nonatomic) NBHashBucketer *bucketer;

+ (id)_bloomFilterScheduler;
+ (id)_sharedProxyingScheduler;

- (id)_bloomFilterError;
- (id)_fetchConfigPromiseWithQualityOfService:(long long)a0;
- (void)fetchWebURLBloomFilterInfoWithQualityOfService:(long long)a0 completion:(id /* block */)a1;
- (id)_assetHost;
- (id)_fetchCoreConfigurationIfNeededPromiseWithQualityOfService:(long long)a0;
- (id)_fetchListsPromiseWithConfig:(id)a0 coreConfiguration:(id)a1 hash:(id)a2 qualityOfService:(long long)a3;
- (void)_fetchListsPromiseThroughProxy:(BOOL)a0 withResourceURL:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (id)_hashOfURLWithWebURL:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_fetchBloomFilterInfoPromiseWithQualityOfService:(long long)a0;
- (void)resolveWebURL:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)_articleIDWithHash:(id)a0 lists:(id)a1 storeFrontID:(id)a2;
- (id)_fetchConfigIfNeededPromiseWithCoreConfiguration:(id)a0 qualityOfService:(long long)a1;
- (id)initWithConfigurationManager:(id)a0 cachesDirectoryURL:(id)a1;

@end
