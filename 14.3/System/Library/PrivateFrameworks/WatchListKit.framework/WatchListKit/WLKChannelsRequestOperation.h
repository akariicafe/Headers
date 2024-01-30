@class NSString, WLKChannelsResponse;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) BOOL filtered;
@property (retain, nonatomic) WLKChannelsResponse *channelsResponse;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithCaller:(id)a0;
- (id)initWithCaller:(id)a0 filtered:(BOOL)a1;

@end
