@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL isNewsAppPurchase;

- (id)initWithChannelID:(id)a0 isNewsAppPurchase:(BOOL)a1;
- (void).cxx_destruct;

@end
