@class NSString, _PASBundleIdResolver, PPXPCServerPipelinedBatchQueryManager;
@protocol PPLocationClientProtocol;

@interface PPLocationReadOnlyServerRequestHandler : NSObject <PPLocationReadOnlyServerProtocol> {
    id<PPLocationClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)setRemoteObjectProxy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unblockPendingQueries;
- (void)locationRecordsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)rankedLocationsWithQuery:(id)a0 queryId:(unsigned long long)a1;

@end
