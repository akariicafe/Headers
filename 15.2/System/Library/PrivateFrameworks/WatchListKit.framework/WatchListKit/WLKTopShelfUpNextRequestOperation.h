@class WLKContinueWatchingResponse;

@interface WLKTopShelfUpNextRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContinueWatchingResponse *response;

- (void)processResponse;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
