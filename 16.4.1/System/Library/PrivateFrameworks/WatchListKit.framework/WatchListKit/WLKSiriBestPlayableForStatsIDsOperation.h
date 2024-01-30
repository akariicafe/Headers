@class NSArray, WLKSiriBestPlayablesResponse;

@interface WLKSiriBestPlayableForStatsIDsOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSArray *statsIDs;
@property (readonly, nonatomic) WLKSiriBestPlayablesResponse *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithStatsIDs:(id)a0 caller:(id)a1;

@end
