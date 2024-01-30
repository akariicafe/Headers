@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest

@property (readonly, copy, nonatomic) NSArray *statsIDs;

- (id)init;
- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* block */)a0;
- (id)initWithStatsIDs:(id)a0;

@end
