@class FCPaywallVisualSpecConfiguration, NSString, FCSubscriptionButtonConfiguration, NSURL, FCPaywallTopOffsetConfiguration;

@interface FCPaywallConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long paywallType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *learnMoreTitle;
@property (copy, nonatomic) NSURL *learnMoreURL;
@property (copy, nonatomic) NSString *offersLinkTitle;
@property (copy, nonatomic) NSURL *offersLinkURL;
@property (nonatomic) unsigned long long offersLinkTargetType;
@property (retain, nonatomic) FCPaywallVisualSpecConfiguration *visualSpecConfig;
@property (retain, nonatomic) FCSubscriptionButtonConfiguration *subscriptionButtonConfig;
@property (copy, nonatomic) NSString *descriptionTrial;
@property (copy, nonatomic) NSString *descriptionNonTrial;
@property (readonly, nonatomic) BOOL externalOverridesEnabled;
@property (readonly, nonatomic) FCPaywallTopOffsetConfiguration *paywallTopOffsetConfig;

+ (id)defaultArticleHardPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultAudioArticleHardPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultAudioArticleSharedHardPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultAudioArticleSharedSoftPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultAudioArticleSoftPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultAudioFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultAudioFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultAudioPaywallDescription;
+ (id)defaultAudioPaywallTitle;
+ (id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultDeferredPaywallTopOffsetConfiguration;
+ (id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultPDFHardPaywallWithLandingPageArticleID:(id)a0;
+ (id)defaultPaywallDescription;
+ (id)defaultPaywallTitle;
+ (id)defaultPaywallTopOffsetConfiguration;
+ (id)defaultSmallPaywallTitle;

- (id)initWithConfigDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPaywallType:(unsigned long long)a0 title:(id)a1 descriptionTrial:(id)a2 descriptionNonTrial:(id)a3 learnMoreTitle:(id)a4 learnMoreURL:(id)a5 offersLinkTitle:(id)a6 offersLinkURL:(id)a7 offersLinkTargetType:(unsigned long long)a8 externalOverridesEnabled:(BOOL)a9 subscriptionButtonConfig:(id)a10 visualSpecConfig:(id)a11 paywallTopOffsetConfig:(id)a12;
- (void).cxx_destruct;

@end
