@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPConnectionsClientProtocol;

@interface PPConnectionsServerRequestHandler : NSObject <PPConnectionsServerProtocol> {
    id<PPConnectionsClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (void)setRemoteObjectProxy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)recentLocationDonationsSinceDate:(id)a0 client:(id)a1 queryId:(unsigned long long)a2;
- (void)unblockPendingQueries;
- (void)recentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 client:(id)a4 queryId:(unsigned long long)a5;

@end
