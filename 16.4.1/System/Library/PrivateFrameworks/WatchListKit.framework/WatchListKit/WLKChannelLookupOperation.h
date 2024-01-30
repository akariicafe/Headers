@class WLKChannelResponse;

@interface WLKChannelLookupOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKChannelResponse *channelResponse;

- (void).cxx_destruct;
- (id)initWithAdamId:(id)a0;
- (void)processResponse;

@end
