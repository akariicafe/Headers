@class APOdmlAssetManager, NSArray, APOdmlUnfairLock, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_group;

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
@property (readonly) NSObject<OS_dispatch_group> *rerankDispatchGroup;
@property (nonatomic) unsigned long long placementType;

- (void)_handleError:(long long)a0;
- (BOOL)sendRerankResponseIfAvailable:(id)a0 error:(id)a1;
- (id)sortableArray:(id)a0;
- (id)initWithPersonalizedAdsEnabled:(BOOL)a0 placementType:(unsigned long long)a1;
- (id)initWithPersonalizedAdsEnabled:(BOOL)a0 assetManager:(id)a1 placementType:(unsigned long long)a2;
- (void)setAndRerankAds:(id)a0;
- (void)rerankResponseTimeout;
- (void)getRerankedAdsWithTimeLimit:(double)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)adSpecificFeatures:(id)a0;

@end
