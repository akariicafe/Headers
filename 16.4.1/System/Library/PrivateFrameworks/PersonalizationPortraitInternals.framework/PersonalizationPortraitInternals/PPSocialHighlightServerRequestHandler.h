@class NSString, NSArray, PPXPCServerPipelinedBatchQueryManager;
@protocol PPSocialHighlightClientProtocol;

@interface PPSocialHighlightServerRequestHandler : NSObject <PPSocialHighlightServerProtocol> {
    id<PPSocialHighlightClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (copy, nonatomic) NSArray *applicationIdentifiers;

- (void)setRemoteObjectProxy:(id)a0;
- (void)rankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 queryId:(unsigned long long)a3;
- (void)attributionForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)rankedCollaborationsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 queryId:(unsigned long long)a3;
- (void)decayIntervalWithCompletion:(id /* block */)a0;
- (void)rankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 queryId:(unsigned long long)a3;
- (void)unblockPendingQueries;
- (id)init;
- (void)feedbackForAttribution:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)feedbackForHighlight:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;

@end
