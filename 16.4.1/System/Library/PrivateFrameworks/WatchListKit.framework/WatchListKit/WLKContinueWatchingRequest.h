@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest

@property (nonatomic) BOOL allowAuthentication;
@property (readonly, nonatomic) WLKContinueWatchingResponse *response;

- (id)init;
- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* block */)a0;

@end
