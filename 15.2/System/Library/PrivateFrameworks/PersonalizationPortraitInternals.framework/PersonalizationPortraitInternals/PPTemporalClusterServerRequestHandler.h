@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPTemporalClusterClientProtocol;

@interface PPTemporalClusterServerRequestHandler : NSObject <PPTemporalClusterServerProtocol> {
    id<PPTemporalClusterClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (void)setRemoteObjectProxy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unblockPendingQueries;
- (void)rankedTemporalClustersForStartDate:(id)a0 endDate:(id)a1 queryId:(unsigned long long)a2;

@end
