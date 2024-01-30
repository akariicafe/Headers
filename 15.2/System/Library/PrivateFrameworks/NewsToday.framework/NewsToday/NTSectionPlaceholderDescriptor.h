@class NSString, NSURL;

@interface NTSectionPlaceholderDescriptor : NSObject <NTSectionDescriptor>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *subidentifier;
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

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 nameColorLight:(id)a1 nameColorDark:(id)a2 minimumStoriesAllocation:(unsigned long long)a3 maximumStoriesAllocation:(unsigned long long)a4 backingTagID:(id)a5;
- (void)configureCatchUpOperationWithFetchRequest:(id)a0;
- (id)assembleResultsWithCatchUpOperation:(id)a0;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)a0;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)a0 limit:(unsigned long long)a1 priorFeedItems:(id)a2;

@end
