@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest

@property (readonly, copy, nonatomic) NSArray *statsIDs;

- (void).cxx_destruct;
- (id)init;
- (void)makeRequestWithCompletion:(id /* block */)a0;
- (id)initWithStatsIDs:(id)a0;

@end
