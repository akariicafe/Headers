@class NSDictionary, NSString;

@interface FCPurchaseLookupFetchOperationResult : NSObject

@property (copy, nonatomic) NSDictionary *channelIDsByPurchaseID;
@property (copy, nonatomic) NSDictionary *bundleChannelIDsByPurchaseID;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;

- (void).cxx_destruct;
- (id)initWithChannelIDsByPurchaseID:(id)a0 bundleChannelIDsByPurchaseID:(id)a1 bundleChannelIDsVersion:(id)a2;

@end
