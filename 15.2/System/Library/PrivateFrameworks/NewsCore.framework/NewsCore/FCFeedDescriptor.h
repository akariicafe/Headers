@class NSString, NSArray;
@protocol FCContentContext, FCFeedTheming, FCTagProviding, FCChannelProviding;

@interface FCFeedDescriptor : NSObject <NSCopying, FCFeedHeadlineSource, FCFeedAdMetadataProviding>

@property (nonatomic) long long feedType;
@property (readonly, nonatomic) long long feedSortMethod;
@property (readonly, nonatomic) long long feedFilterOptions;
@property (readonly, nonatomic) long long feedPersonalizationConfigurationSet;
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
@property (readonly, nonatomic) BOOL isIssueBackCatalog;
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

- (id)initWithIdentifier:(id)a0;
- (id)fetchOperationForHeadlinesWithIDs:(id)a0 context:(id)a1;
- (id)streamOfLatestHeadlinesWithContext:(id)a0;
- (void)fetchHeadlinesWithContext:(id)a0 forIdentifiers:(id)a1 downloadAssets:(BOOL)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (id)languagesWithSubscriptionController:(id)a0;
- (BOOL)subscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1 error:(id *)a2;
- (BOOL)isMutedWithSubscriptionController:(id)a0;
- (void)unsubscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (id)streamOfHeadlinesWithIDs:(id)a0 context:(id)a1 cachedOnly:(BOOL)a2 maxCachedAge:(double)a3;
- (id)latestHeadlineResultsWithContext:(id)a0;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)a0 sinceDate:(id)a1 filter:(BOOL)a2 personalize:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)issueBackCatalogFeedDescriptor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
