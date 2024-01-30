@class NSOrderedSet, NSString, NSURL, FCPersonalizationTreatment;

@interface FCUserVector : NSObject <FCUserVectorProvider>

@property (retain, nonatomic) NSURL *whitelistURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (retain, nonatomic) NSOrderedSet *bundleChannelIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)bundleSubscribedVector;
- (id)findVector:(id)a0 closestToBins:(id)a1;
- (id)computePersonalizationVectorWithBaselineAggregate:(id)a0 allAggregates:(id)a1;
- (id)initWithWhitelistURL:(id)a0 modelURL:(id)a1 personalizationTreatment:(id)a2 bundleChannelIDs:(id)a3;

@end
