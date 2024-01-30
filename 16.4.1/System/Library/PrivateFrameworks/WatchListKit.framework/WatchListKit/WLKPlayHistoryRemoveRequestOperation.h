@class WLKContinueWatchingResponse;

@interface WLKPlayHistoryRemoveRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKContinueWatchingResponse *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithChannelID:(id)a0 externalID:(id)a1 caller:(id)a2;

@end
