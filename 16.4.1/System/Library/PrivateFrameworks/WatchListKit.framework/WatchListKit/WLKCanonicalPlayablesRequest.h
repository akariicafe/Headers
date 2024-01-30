@class NSString;

@interface WLKCanonicalPlayablesRequest : WLKRequest

@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic) NSString *statsID;

- (void).cxx_destruct;
- (id)initWithCanonicalID:(id)a0;
- (id)initWithStatsID:(id)a0;
- (void)makeRequestWithCompletion:(id /* block */)a0;
- (void)makeRequestWithCompletion:(id /* block */)a0 canonicalType:(long long)a1;

@end
