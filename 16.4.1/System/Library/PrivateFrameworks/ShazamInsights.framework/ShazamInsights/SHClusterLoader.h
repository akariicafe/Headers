@class SHClusterSQLiteDataStore;
@protocol SHDataFetcher;

@interface SHClusterLoader : NSObject

@property (readonly, nonatomic) SHClusterSQLiteDataStore *dataStore;
@property (readonly, nonatomic) id<SHDataFetcher> dataFetcher;

+ (void)loadDataForRequest:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithDataFetcher:(id)a0 dataStore:(id)a1;
- (void)loadFromURL:(id)a0 type:(long long)a1 storefront:(id)a2 reuseExistingData:(BOOL)a3 completion:(id /* block */)a4;

@end
