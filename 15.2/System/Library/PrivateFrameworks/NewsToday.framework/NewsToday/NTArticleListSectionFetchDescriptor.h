@class NSString, NTPBArticleListTodaySectionSpecificConfig;

@interface NTArticleListSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>

@property (copy, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListRequest;
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
- (id)initWithArticleListConfiguration:(id)a0;

@end
