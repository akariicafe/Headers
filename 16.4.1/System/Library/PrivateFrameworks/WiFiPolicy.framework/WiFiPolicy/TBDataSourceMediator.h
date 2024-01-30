@class TBDataSource, NSOperationQueue, TBCoreDataSource;

@interface TBDataSourceMediator : NSObject

@property (retain, nonatomic) TBCoreDataSource *local;
@property (retain, nonatomic) TBDataSource *remote;
@property (retain, nonatomic) NSOperationQueue *fetchQueue;

- (id)initWithLocalStoreDescriptor:(id)a0 remoteStore:(id)a1;
- (void)removeWithFetchRequest:(id)a0;
- (id)initWithLocalStoreDescriptor:(id)a0;
- (void)prune3BarsNetworks:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)executeFetchRequest:(id)a0;
- (void)removeAllWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
