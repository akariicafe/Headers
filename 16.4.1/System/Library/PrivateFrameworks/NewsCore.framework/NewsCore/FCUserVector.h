@class NSOrderedSet, NSString, NSURL, FCPersonalizationTreatment, FCSubscriptionController;

@interface FCUserVector : NSObject

@property (retain, nonatomic) NSURL *whitelistURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) NSOrderedSet *bundleChannelIDs;
@property (retain, nonatomic) NSOrderedSet *sportsTagIDs;
@property (retain, nonatomic) NSString *bundleChannelIDsVersion;
@property (retain, nonatomic) FCSubscriptionController *subscriptionController;

- (id)init;
- (id)bundleSubscribedVector;
- (void).cxx_destruct;
- (id)computePersonalizationVectorWithAggregateStore:(id)a0 personalizationTreatment:(id)a1 tagRanker:(id)a2 options:(long long)a3;
- (id)findVector:(id)a0 closestToBins:(id)a1;
- (id)initWithWhitelistURL:(id)a0 modelURL:(id)a1 personalizationTreatment:(id)a2 bundleChannelIDs:(id)a3 bundleChannelIDsVersion:(id)a4 subscriptionController:(id)a5 sportsTagIDs:(id)a6;
- (id)subscribedBundleChannelIDs;
- (id)subscribedSportsTagsWithPersonalizationTreatment:(id)a0 tagRanker:(id)a1;

@end
