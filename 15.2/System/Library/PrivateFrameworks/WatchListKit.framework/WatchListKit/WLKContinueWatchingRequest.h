@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest

@property (nonatomic) BOOL allowAuthentication;
@property (readonly, nonatomic) WLKContinueWatchingResponse *response;

- (void).cxx_destruct;
- (id)init;
- (void)makeRequestWithCompletion:(id /* block */)a0;

@end
