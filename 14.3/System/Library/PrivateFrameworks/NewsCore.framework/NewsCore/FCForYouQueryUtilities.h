@interface FCForYouQueryUtilities : NSObject

+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)a0 mutedTagIDs:(id)a1 purchasedTagIDs:(id)a2 bundleSubscriptionProvider:(id)a3 configuration:(id)a4 contentContext:(id)a5 fallbackToPresubscribedTagIDs:(BOOL)a6 qualityOfService:(long long)a7 completionHandler:(id /* block */)a8;
+ (id)feedRequestsForTags:(id)a0 tagBinProvider:(id /* block */)a1 hiddenFeedIDs:(id)a2 paidBundleFeedID:(id)a3 purchasedTagIDs:(id)a4 bundleSubscriptionProvider:(id)a5 configuration:(id)a6 maxCount:(unsigned long long)a7 tagIDFeedRangeProvider:(id /* block */)a8 isRunningPPT:(BOOL)a9;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)a0 mutedTagIDs:(id)a1 purchasedTagIDs:(id)a2 bundleSubscriptionProvider:(id)a3 configuration:(id)a4 contentContext:(id)a5 fallbackToPresubscribedTagIDs:(BOOL)a6 qualityOfService:(long long)a7 completionHandler:(id /* block */)a8;
+ (id)_filterTagsForQuerying:(id)a0 withMutedTagIDs:(id)a1;

@end
