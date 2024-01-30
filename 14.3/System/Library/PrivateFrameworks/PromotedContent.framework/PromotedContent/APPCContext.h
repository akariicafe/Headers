@interface APPCContext : APPCBaseContext <APPCPromotableContext, APPCPromotableUIContext, APPCMetricRegister> {
    void /* unknown type, empty encoding */ inventoryLock;
    void /* unknown type, empty encoding */ inventory;
    void /* unknown type, empty encoding */ placeholdersLock;
    void /* unknown type, empty encoding */ placeholders;
    void /* unknown type, empty encoding */ lastError;
    void /* unknown type, empty encoding */ requester;
    void /* unknown type, empty encoding */ blacklistEvaluator;
    void /* unknown type, empty encoding */ newsContext;
    void /* unknown type, empty encoding */ contextQueue;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ fetchingLock;
    void /* unknown type, empty encoding */ fetching;
    void /* unknown type, empty encoding */ waitingLock;
    void /* unknown type, empty encoding */ waiting;
    void /* unknown type, empty encoding */ prefetchLock;
}

@property (nonatomic, readonly) long long hash;

- (id)promotedContentInterstitialWithSize:(struct CGSize { double x0; double x1; })a0 ready:(id /* block */)a1;
- (void)nativePromotedContentWithSize:(struct CGSize { double x0; double x1; })a0 contentFetched:(id /* block */)a1;
- (void)promotedContentNativeWithSize:(struct CGSize { double x0; double x1; })a0 contentFetched:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prefetchPromotedContentWithRequests:(id)a0;
- (id)promotedContentWithType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 placeholderReplacement:(id /* block */)a2;
- (void)registerBlacklistEvaluator:(id /* block */)a0;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (void)removeHandler;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 requestedAd:(id)a1 current:(id)a2 next:(id)a3 newsContext:(id)a4;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 requestedAd:(id)a1 current:(id)a2 next:(id)a3;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 requestedAd:(id)a1 current:(id)a2 adjacent:(id)a3 newsContext:(id)a4;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 requestedAd:(id)a1 current:(id)a2 adjacent:(id)a3;
- (id)promotedContentVideoWithSize:(struct CGSize { double x0; double x1; })a0 placeholderReplacement:(id /* block */)a1;

@end
