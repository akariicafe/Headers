@class NSString, WLKChannelsResponse;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) BOOL filtered;
@property (retain, nonatomic) WLKChannelsResponse *channelsResponse;

- (id)initWithCaller:(id)a0;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithCaller:(id)a0 isFilteredByUserChannels:(BOOL)a1;

@end
