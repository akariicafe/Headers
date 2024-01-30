@class NSString;

@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 serviceID:(id)a1;

@end
