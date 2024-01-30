@class NSSet, NSString, FCBundleSubscription;
@protocol FCPaidAccessCheckerType;

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming>

@property (nonatomic) long long filterOptions;
@property (copy, nonatomic) NSSet *otherArticleIDs;
@property (copy, nonatomic) NSSet *otherClusterIDs;
@property (copy, nonatomic) NSSet *mutedTagIDs;
@property (copy, nonatomic) NSSet *subscribedTagIDs;
@property (copy, nonatomic) NSString *briefingsTagID;
@property (retain, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (retain, nonatomic) FCBundleSubscription *bundleSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithFilterOptions:(long long)a0 configuration:(id)a1 context:(id)a2 otherArticleIDs:(id)a3;
+ (id)transformationWithFilterOptions:(long long)a0 otherArticleIDs:(id)a1 otherClusterIDs:(id)a2 subscribedTagIDs:(id)a3 mutedTagIDs:(id)a4 briefingsTagID:(id)a5 paidAccessChecker:(id)a6 bundleSubscription:(id)a7;
+ (id)transformationWithFilterOptions:(long long)a0 configuration:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (id)transformFeedItemsWithResults:(id)a0;
- (id)transformHeadlinesWithResult:(id)a0;
- (id)transformFeedItems:(id)a0;
- (id)transformHeadline:(id)a0;
- (id)transformHeadlines:(id)a0;

@end
