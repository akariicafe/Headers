@class APOdmlAssetManager, NSArray, APOdmlUnfairLock, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface APOdmlReranker : NSObject

@property (class, readonly) NSObject<OS_dispatch_queue> *rerankSerialQueue;
@property (class, readonly) NSObject<OS_dispatch_queue> *rerankResponseTimeoutQueue;

@property (copy, nonatomic) id /* block */ rerankResponse;
@property (retain, nonatomic) NSArray *originalAds;
@property (retain, nonatomic) NSArray *rerankedAds;
@property (retain) NSError *rerankerError;
@property (retain, nonatomic) NSDate *rerankingStartDate;
@property (retain, nonatomic) APOdmlAssetManager *assetManager;
@property (retain, nonatomic) APOdmlUnfairLock *rerankResponseLock;
@property (readonly, nonatomic) unsigned long long ident;
@property (readonly, nonatomic) BOOL isPersonalizedAdsEnabled;

- (id)initWithPersonalizedAdsEnabled:(BOOL)a0 assetManager:(id)a1;
- (void)rerankResponseTimeout;
- (void)setAndRerankAds:(id)a0;
- (void)_handleError:(long long)a0;
- (id)predictPTTRFromResponse:(id)a0 usingModel:(id)a1;
- (id)sortableArray:(id)a0;
- (id)initWithPersonalizedAdsEnabled:(BOOL)a0;
- (void)getRerankedAdsWithTimeLimit:(double)a0 completion:(id /* block */)a1;
- (BOOL)sendRerankResponseIfAvailable:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)constructPredictor:(id)a0 usingModel:(id)a1;
- (long long)permissionCheck:(id)a0;

@end
