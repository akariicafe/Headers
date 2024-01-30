@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPTemporalClusterClientProtocol;

@interface PPTemporalClusterServerRequestHandler : NSObject <PPTemporalClusterServerProtocol> {
    id<PPTemporalClusterClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (void)setRemoteObjectProxy:(id)a0;
- (void)unblockPendingQueries;
- (id)init;
- (void).cxx_destruct;
- (void)rankedTemporalClustersForStartDate:(id)a0 endDate:(id)a1 queryId:(unsigned long long)a2;

@end
