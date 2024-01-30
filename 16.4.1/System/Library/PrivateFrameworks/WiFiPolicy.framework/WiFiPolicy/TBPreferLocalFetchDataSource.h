@class TBDataSource;
@protocol TBCacheProvider;

@interface TBPreferLocalFetchDataSource : NSObject

@property (retain, nonatomic) TBDataSource *localDataSource;
@property (retain, nonatomic) TBDataSource *remoteDataSource;
@property (retain, nonatomic) id<TBCacheProvider> cacheProvider;

- (id)initWithLocalDataSource:(id)a0 remoteDataSource:(id)a1 cacheProvider:(id)a2;
- (void).cxx_destruct;

@end
