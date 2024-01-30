@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSDictionary *query;
@property (readonly, nonatomic) WLKSearchWatchListResponse *response;

- (void)processResponse;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 caller:(id)a1;

@end
