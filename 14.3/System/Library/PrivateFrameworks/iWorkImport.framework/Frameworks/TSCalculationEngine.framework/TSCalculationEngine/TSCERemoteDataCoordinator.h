@class NSMutableDictionary, TSUIntToIntDictionary, NSMutableSet, TSUPointerKeyDictionary, NSObject, TSCERemoteDataValueMap;
@protocol OS_dispatch_queue;

@interface TSCERemoteDataCoordinator : NSObject

@property (readonly, nonatomic) NSMutableSet *sourceFetchers;
@property (readonly, nonatomic) TSUPointerKeyDictionary *storeMap;
@property (readonly, nonatomic) TSCERemoteDataValueMap *cachedSpecifiers;
@property (readonly, nonatomic) NSMutableDictionary *cachedQuotes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) TSUIntToIntDictionary *dataKindStatus;

+ (id)sharedCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)sourceFetcherDidGoOnline:(id)a0 forKeys:(id)a1;
- (void)sourceFetcherDidGoOffline:(id)a0 forKeys:(id)a1;
- (void)fetchQuotesWithTickers:(id)a0 completion:(id /* block */)a1;
- (void)autoCompleteQuotesWithInput:(id)a0 completion:(id /* block */)a1;
- (void)p_removeRemoteDataInterest:(id)a0 forStore:(id)a1;
- (id)p_defaultStockList;
- (id)p_fetcherForDataKind:(long long)a0;
- (BOOL)p_canUpdateStore:(id)a0;
- (id)p_localeStocks;
- (void)p_revalidateOnlineStatus;
- (id)p_actionMapForKeys:(id)a0 quotes:(id)a1;
- (void)registerStore:(id)a0;
- (void)unregisterStore:(id)a0;
- (id)valueForSingleKey:(id)a0;
- (id)cachedQuoteForSingleSymbol:(id)a0;
- (void)updateKnownCachedStocksInStore:(id)a0;
- (void)addRemoteDataInterest:(id)a0 forStore:(id)a1;
- (void)removeRemoteDataInterest:(id)a0 forStore:(id)a1;
- (id)p_dataSourceFetcherForRemoteData:(id)a0;
- (BOOL)isOnlineForDataKind:(long long)a0;
- (void)sourceFetcherDidUpdate:(id)a0 withValues:(id)a1 quotes:(id)a2;

@end
