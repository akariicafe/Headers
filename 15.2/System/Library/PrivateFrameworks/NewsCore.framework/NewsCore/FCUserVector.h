@class NSOrderedSet, NSString, NSURL, FCPersonalizationTreatment, FCSubscriptionList;

@interface FCUserVector : NSObject <FCUserVectorProvider>

@property (retain, nonatomic) NSURL *whitelistURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) NSOrderedSet *bundleChannelIDs;
@property (retain, nonatomic) NSString *bundleChannelIDsVersion;
@property (retain, nonatomic) FCSubscriptionList *subscriptionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findVector:(id)a0 closestToBins:(id)a1;
- (id)bundleSubscribedVector;
- (id)subscribedBundleChannelIDs;
- (id)computePersonalizationVectorWithBaselineAggregate:(id)a0 allAggregates:(id)a1 options:(long long)a2;
- (id)initWithWhitelistURL:(id)a0 modelURL:(id)a1 personalizationTreatment:(id)a2 bundleChannelIDs:(id)a3 bundleChannelIDsVersion:(id)a4 subscriptionList:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
