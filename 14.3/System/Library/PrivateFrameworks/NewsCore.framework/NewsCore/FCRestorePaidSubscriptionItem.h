@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL isNewsAppPurchase;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 isNewsAppPurchase:(BOOL)a1;

@end
