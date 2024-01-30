@class NSString, NSURL, NSObject;
@protocol NTSectionFetchDescriptor;

@interface NTSectionConfigSectionDescriptor : NSObject <NTSectionDescriptor>

@property (copy, nonatomic) NSObject<NTSectionFetchDescriptor> *fetchDescriptor;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *compactName;
@property (readonly, copy, nonatomic) NSString *referralBarName;
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property (readonly, nonatomic) unsigned long long cachedResultCutoffTime;
@property (readonly, nonatomic) unsigned long long fallbackOrder;
@property (readonly, nonatomic) unsigned long long minimumStoriesAllocation;
@property (readonly, nonatomic) unsigned long long maximumStoriesAllocation;
@property (readonly, nonatomic) int readArticlesFilterMethod;
@property (readonly, nonatomic) int seenArticlesFilterMethod;
@property (readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (readonly, nonatomic) long long supplementalInterSectionFilterOptions;
@property (readonly, nonatomic) long long supplementalIntraSectionFilterOptions;
@property (readonly, nonatomic) int promotionCriterion;
@property (readonly, nonatomic) NSString *backingTagID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameColorLight;
@property (readonly, copy, nonatomic) NSString *nameColorDark;
@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSURL *nameActionURL;
@property (readonly, copy, nonatomic) NSString *backgroundColorLight;
@property (readonly, copy, nonatomic) NSString *backgroundColorDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureCatchUpOperationWithFetchRequest:(id)a0;
- (id)assembleResultsWithCatchUpOperation:(id)a0;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)a0;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)a0 limit:(unsigned long long)a1 priorFeedItems:(id)a2;
- (id)initWithSectionConfig:(id)a0 appConfiguration:(id)a1 topStoriesChannelID:(id)a2 hiddenFeedIDs:(id)a3 paidBundleFeedID:(id)a4 todayData:(id)a5 supplementalFeedFilterOptions:(long long)a6;

@end
