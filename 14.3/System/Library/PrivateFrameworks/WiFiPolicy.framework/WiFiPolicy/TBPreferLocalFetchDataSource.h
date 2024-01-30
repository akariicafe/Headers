@class TBDataSource;
@protocol TBCacheProvider;

@interface TBPreferLocalFetchDataSource : NSObject

@property (retain, nonatomic) TBDataSource *localDataSource;
@property (retain, nonatomic) TBDataSource *remoteDataSource;
@property (retain, nonatomic) id<TBCacheProvider> cacheProvider;

- (void).cxx_destruct;
- (id)initWithLocalDataSource:(id)a0 remoteDataSource:(id)a1 cacheProvider:(id)a2;

@end
