@class NSString, _PASBundleIdResolver, PPXPCServerPipelinedBatchQueryManager;
@protocol PPNamedEntityClientProtocol;

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject <PPNamedEntityReadOnlyServerProtocol> {
    id<PPNamedEntityClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)setRemoteObjectProxy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)namedEntityRecordsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)mapItemForPlaceName:(id)a0 completion:(id /* block */)a1;
- (void)rankedNamedEntitiesWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)unblockPendingQueries;

@end
