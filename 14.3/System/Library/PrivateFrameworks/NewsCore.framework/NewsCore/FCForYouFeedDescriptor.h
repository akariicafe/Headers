@class NSString, FCSubscriptionList;
@protocol FCFeedPersonalizing, FCPaidAccessCheckerType, FCCoreConfigurationManager;

@interface FCForYouFeedDescriptor : FCFeedDescriptor <FCFeedPaginating>

@property (nonatomic) unsigned long long savedStoriesCount;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) FCSubscriptionList *subscriptionList;
@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)feedPersonalizationConfigurationSet;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_sortedConfigurableGroupEmittersWithForYouGroupsConfiguration:(id)a0 forYouConfig:(id)a1;
- (BOOL)hasEditions;
- (id)initWithIdentifier:(id)a0 savedStoriesCount:(long long)a1 configurationManager:(id)a2 subscriptionList:(id)a3 feedPersonalizer:(id)a4 paidAccessChecker:(id)a5;
- (id)allEmitterClasses;
- (id)languagesWithSubscriptionController:(id)a0;
- (BOOL)needsForYouConfig;
- (long long)feedFilterOptions;
- (id)_audioDailyBriefingFeedGroupEmitterFromConfiguration:(id)a0 emitterIdentifiersSeen:(id)a1;
- (id)feedPaginator;
- (BOOL)derivesContentsFromExplicitSubscriptions;
- (id)iAdFeedID;
- (id)editionFollowingEdition:(id)a0;
- (id)name;
- (BOOL)shouldFilterFeedGroupEmitter:(id)a0 withConfiguration:(id)a1;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)a0 sinceDate:(id)a1 filter:(BOOL)a2 personalize:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)offlineFeedGroupEmittersWithConfiguration:(id)a0 forYouConfig:(id)a1;
- (id)editionAtDate:(id)a0;
- (id)feedGroupEmittersWithConfiguration:(id)a0 forYouConfig:(id)a1;
- (long long)feedSortMethod;

@end
