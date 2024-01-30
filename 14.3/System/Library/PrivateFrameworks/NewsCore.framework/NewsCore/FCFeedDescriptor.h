@class NSString, NSArray;
@protocol FCContentContext, FCFeedPaginating, FCFeedTheming, FCTagProviding, FCChannelProviding;

@interface FCFeedDescriptor : NSObject <NSCopying, FCFeedHeadlineSource, FCFeedAdMetadataProviding>

@property (nonatomic) long long feedType;
@property (readonly, nonatomic) BOOL needsForYouConfig;
@property (readonly, nonatomic) id<FCFeedPaginating> feedPaginator;
@property (readonly, nonatomic) long long feedSortMethod;
@property (readonly, nonatomic) long long feedFilterOptions;
@property (readonly, nonatomic) long long feedPersonalizationConfigurationSet;
@property (readonly, nonatomic) BOOL derivesContentsFromExplicitSubscriptions;
@property (readonly, nonatomic) BOOL hasEditions;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<FCFeedTheming> theme;
@property (retain, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) BOOL hideAccessoryText;
@property (retain, nonatomic) NSArray *otherArticleIDs;
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, nonatomic) id<FCTagProviding> backingTag;
@property (readonly, nonatomic) id<FCChannelProviding> backingChannel;
@property (readonly, nonatomic) NSString *backingChannelID;
@property (readonly, nonatomic) NSString *backingSectionID;
@property (readonly, nonatomic) NSString *backingTopicID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *iAdIdentifier;
@property (readonly, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) NSArray *iAdKeywords;
@property (readonly, nonatomic) long long iAdContentProvider;
@property (readonly, nonatomic) NSString *iAdPrimaryAudience;
@property (readonly, nonatomic) NSString *iAdFeedID;
@property (readonly, nonatomic) NSString *iAdSectionID;

- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allEmitterClasses;
- (id)initWithIdentifier:(id)a0;
- (id)languagesWithSubscriptionController:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldFilterFeedGroupEmitter:(id)a0 withConfiguration:(id)a1;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)a0 sinceDate:(id)a1 filter:(BOOL)a2 personalize:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)offlineFeedGroupEmittersWithConfiguration:(id)a0 forYouConfig:(id)a1;
- (id)feedGroupEmittersWithConfiguration:(id)a0 forYouConfig:(id)a1;
- (id)fetchOperationForHeadlinesWithIDs:(id)a0 context:(id)a1;
- (id)streamOfLatestHeadlinesWithContext:(id)a0;
- (void)fetchHeadlinesWithContext:(id)a0 forIdentifiers:(id)a1 downloadAssets:(BOOL)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (BOOL)isMutedWithSubscriptionController:(id)a0;
- (BOOL)subscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1 error:(id *)a2;
- (void)unsubscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (id)streamOfHeadlinesWithIDs:(id)a0 context:(id)a1 cachedOnly:(BOOL)a2 maxCachedAge:(double)a3;
- (id)latestHeadlineResultsWithContext:(id)a0;

@end
