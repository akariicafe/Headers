@class NSObject;
@protocol OS_dispatch_queue;

@interface TBRemoteDataSource : TBDataSource

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)executeFetchRequest:(id)a0;
- (void)_submitNetworkSearch:(id)a0 completion:(id /* block */)a1;
- (void)_executeNetworkFetchRequest:(id)a0;
- (void)_captureTileFetchError:(id)a0 tileKey:(id)a1 duration:(double)a2 trigger:(unsigned long long)a3;
- (void)_executeLocationFetchRequest:(id)a0;
- (void)_executeTileFetchRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_writeSearchTileToFile:(id)a0;
- (void)_fetchTilesWithRequest:(id)a0;
- (unsigned long long)type;
- (void)_fetchTilesForTileItems:(id)a0 completionHandler:(id /* block */)a1 trigger:(unsigned long long)a2;

@end
