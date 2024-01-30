@class TBDataSource;
@protocol TBCacheProvider;

@interface TBRemoteFetchAndCacheDataSource : NSObject

@property (retain, nonatomic) TBDataSource *fetchDataSource;
@property (retain, nonatomic) id<TBCacheProvider> cacheProvider;

- (void).cxx_destruct;
- (id)initWithFetchDataSource:(id)a0 cacheProvider:(id)a1;

@end
