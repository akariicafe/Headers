@class APOdmlUnfairLock, NSArray, ADOdmlAssetManager, NSError, NSObject, NSDate;
@protocol OS_dispatch_queue, APOdmlRankable;

@interface APOdmlReranker : NSObject

@property (copy, nonatomic) id /* block */ rerankResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rerankResponseTimeoutQueue;
@property (retain, nonatomic) NSArray<APOdmlRankable> *originalAds;
@property (retain, nonatomic) NSArray<APOdmlRankable> *rerankedAds;
@property (retain) NSError *predictionError;
@property (retain) NSError *permissionError;
@property (retain, nonatomic) NSDate *rerankingStartDate;
@property (retain, nonatomic) ADOdmlAssetManager *assetManager;
@property (retain, nonatomic) APOdmlUnfairLock *rerankResponseLock;
@property (retain, nonatomic) APOdmlUnfairLock *genericLock;

- (id)init;
- (void).cxx_destruct;
- (void)setAndRerankAds:(id)a0;
- (void)getRerankedAdsWithTimeLimit:(double)a0 completion:(id /* block */)a1;
- (BOOL)permissionCheck:(id)a0;
- (BOOL)sendRerankResponseIfAvailable:(id)a0 error:(id)a1;
- (id)getSortableArray:(id)a0;
- (void)rerankResponseTimeout;
- (id)predictPTTRFromResponse:(id)a0;

@end
