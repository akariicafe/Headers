@class NTCatchUpOperationForYouRequest, NSString;

@interface NTForYouSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>

@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureCatchUpOperationWithFetchRequest:(id)a0;
- (id)assembleResultsWithCatchUpOperation:(id)a0;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)a0;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)a0 limit:(unsigned long long)a1 priorFeedItems:(id)a2;
- (id)initWithForYouConfiguration:(id)a0 appConfiguration:(id)a1 topStoriesChannelID:(id)a2 hiddenFeedIDs:(id)a3 paidBundleFeedID:(id)a4 mutedTagIDs:(id)a5 purchasedTagIDs:(id)a6 subscribedTagIDs:(id)a7 bundleSubscriptionProvider:(id)a8;

@end
