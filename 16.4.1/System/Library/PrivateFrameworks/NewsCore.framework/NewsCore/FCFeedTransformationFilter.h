@class NSString, NSSet, NSDictionary, FCBundleSubscription;
@protocol FCPaidAccessCheckerType;

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming> {
    long long _filterOptions;
    NSSet *_otherArticleIDs;
    NSSet *_otherClusterIDs;
    NSSet *_mutedTagIDs;
    NSSet *_subscribedTagIDs;
    NSDictionary *_readingHistoryItems;
    NSSet *_playlistArticleIDs;
    NSSet *_downloadedArticleIDs;
    NSString *_briefingsTagID;
    id<FCPaidAccessCheckerType> _paidAccessChecker;
    FCBundleSubscription *_bundleSubscription;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithFilterOptions:(long long)a0 otherArticleIDs:(id)a1 otherClusterIDs:(id)a2 subscribedTagIDs:(id)a3 mutedTagIDs:(id)a4 readingHistoryItems:(id)a5 playlistArticleIDs:(id)a6 downloadedArticleIDs:(id)a7 briefingsTagID:(id)a8 paidAccessChecker:(id)a9 bundleSubscription:(id)a10;
+ (id)transformationWithFilterOptions:(long long)a0 configuration:(id)a1 context:(id)a2 otherArticleIDs:(id)a3;
+ (id)transformationWithFilterOptions:(long long)a0 configuration:(id)a1 context:(id)a2;

- (id)transformFeedItems:(id)a0;
- (id)transformHeadlines:(id)a0;
- (id)transformFeedItemsWithResults:(id)a0;
- (id)transformHeadlinesWithResult:(id)a0;
- (id)transformHeadline:(id)a0;
- (void).cxx_destruct;

@end
