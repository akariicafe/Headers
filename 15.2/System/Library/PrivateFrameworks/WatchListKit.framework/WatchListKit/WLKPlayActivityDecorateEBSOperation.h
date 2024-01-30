@class NSString;

@interface WLKPlayActivityDecorateEBSOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) NSString *externalContentID;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 externalContentID:(id)a1;

@end
