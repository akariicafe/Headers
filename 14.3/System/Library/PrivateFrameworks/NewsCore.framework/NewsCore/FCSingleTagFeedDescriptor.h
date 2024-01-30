@protocol FCTagProviding, FCPaidAccessCheckerType;

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    long long _feedType;
    long long _feedSortMethod;
    long long _feedFilterOptions;
    long long _feedPersonalizationConfigurationSet;
}

@property (copy, nonatomic) id<FCTagProviding> tag;
@property (readonly, copy, nonatomic) id<FCTagProviding> masterTag;
@property (retain, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;

- (long long)feedType;
- (BOOL)hideAccessoryText;
- (id)theme;
- (long long)feedPersonalizationConfigurationSet;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 tag:(id)a1 paidAccessChecker:(id)a2;
- (id)iAdKeywords;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(long long)a3 personalizationConfigurationSet:(long long)a4 paidAccessChecker:(id)a5;
- (id)allEmitterClasses;
- (id)initWithIdentifier:(id)a0;
- (id)languagesWithSubscriptionController:(id)a0;
- (long long)feedFilterOptions;
- (id)iAdFeedID;
- (BOOL)isEqual:(id)a0;
- (id)iAdCategories;
- (id)name;
- (void)setFeedType:(long long)a0;
- (id)iAdSectionID;
- (id)feedGroupEmittersWithConfiguration:(id)a0 forYouConfig:(id)a1;
- (long long)feedSortMethod;
- (long long)iAdContentProvider;
- (id)backingTag;
- (id)iAdPrimaryAudience;
- (BOOL)isMutedWithSubscriptionController:(id)a0;
- (BOOL)subscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1 error:(id *)a2;
- (void)unsubscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1;
- (id)backingChannel;
- (BOOL)isSubscribable;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTopicID;

@end
