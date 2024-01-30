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

- (id)initWithIdentifier:(id)a0;
- (id)theme;
- (long long)feedType;
- (id)iAdFeedID;
- (BOOL)isSubscribable;
- (long long)iAdContentProvider;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)languagesWithSubscriptionController:(id)a0;
- (BOOL)hideAccessoryText;
- (BOOL)subscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1 error:(id *)a2;
- (BOOL)isMutedWithSubscriptionController:(id)a0;
- (id)backingTag;
- (void)unsubscribeToWithSubscriptionController:(id)a0 eventInitiationLevel:(long long)a1;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (id)backingChannel;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTopicID;
- (long long)feedSortMethod;
- (long long)feedFilterOptions;
- (long long)feedPersonalizationConfigurationSet;
- (void)setFeedType:(long long)a0;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(long long)a3 personalizationConfigurationSet:(long long)a4 paidAccessChecker:(id)a5;
- (id)initWithContext:(id)a0 tag:(id)a1 paidAccessChecker:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)iAdCategories;
- (id)name;
- (id)iAdKeywords;

@end
