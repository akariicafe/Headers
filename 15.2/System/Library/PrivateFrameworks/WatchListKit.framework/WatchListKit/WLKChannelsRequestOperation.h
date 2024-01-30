@class NSString, WLKChannelsResponse;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) BOOL filtered;
@property (retain, nonatomic) WLKChannelsResponse *channelsResponse;

- (id)initWithCaller:(id)a0;
- (void)processResponse;
- (void).cxx_destruct;
- (id)initWithCaller:(id)a0 filtered:(BOOL)a1;

@end
