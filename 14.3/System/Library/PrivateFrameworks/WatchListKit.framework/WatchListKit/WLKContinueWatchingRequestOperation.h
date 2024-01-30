@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContinueWatchingResponse *response;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueryParameters:(id)a0;
- (void)processResponse;
- (void)_donateMediaItems:(id)a0;
- (id)initWithCaller:(id)a0 options:(long long)a1;

@end
