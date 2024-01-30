@class NSString, NSSet, NSDictionary, FCBundleSubscription;
@protocol FCPaidAccessCheckerType;

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming> {
    long long _filterOptions;
    NSSet *_otherArticleIDs;
    NSSet *_otherClusterIDs;
    NSSet *_mutedTagIDs;
    NSSet *_subscribedTagIDs;
    NSDictionary *_readingHistoryItems;
    NSString *_briefingsTagID;
    id<FCPaidAccessCheckerType> _paidAccessChecker;
    FCBundleSubscription *_bundleSubscription;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithFilterOptions:(long long)a0 configuration:(id)a1 context:(id)a2 otherArticleIDs:(id)a3;
+ (id)transformationWithFilterOptions:(long long)a0 configuration:(id)a1 context:(id)a2;
+ (id)transformationWithFilterOptions:(long long)a0 otherArticleIDs:(id)a1 otherClusterIDs:(id)a2 subscribedTagIDs:(id)a3 mutedTagIDs:(id)a4 readingHistoryItems:(id)a5 briefingsTagID:(id)a6 paidAccessChecker:(id)a7 bundleSubscription:(id)a8;

- (void).cxx_destruct;
- (id)transformFeedItems:(id)a0;
- (id)transformHeadline:(id)a0;
- (id)transformHeadlinesWithResult:(id)a0;
- (id)transformHeadlines:(id)a0;

@end
