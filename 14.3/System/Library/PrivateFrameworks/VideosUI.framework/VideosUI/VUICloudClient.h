@interface VUICloudClient : NSObject

+ (id)sharedInstance;

- (void)loadArtworkURLsForPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;

@end
