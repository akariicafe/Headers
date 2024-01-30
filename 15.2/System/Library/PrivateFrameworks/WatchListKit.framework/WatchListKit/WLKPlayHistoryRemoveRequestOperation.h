@class WLKContinueWatchingResponse;

@interface WLKPlayHistoryRemoveRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKContinueWatchingResponse *response;

- (void)processResponse;
- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 externalID:(id)a1 caller:(id)a2;

@end
