@class NTPBDate, NSString, NTPBRecordBase, NSData, NTPBPublisherPaidDescriptionStrings, NSMutableArray, NTPBFeedConfiguration;

@interface NTPBTagRecord : PBCodable <NSCopying> {
    struct { unsigned char behaviorFlags : 1; unsigned char contentProvider : 1; unsigned char minimumNewsVersion : 1; unsigned char nameImageBaselineShift : 1; unsigned char nameImageScaleFactor : 1; unsigned char propertyFlags : 1; unsigned char score : 1; unsigned char groupingAvailability : 1; unsigned char type : 1; unsigned char hideAccessoryText : 1; unsigned char isDeprecated : 1; unsigned char isExplicitContent : 1; unsigned char isHidden : 1; unsigned char isNotificationEnabled : 1; unsigned char isPublic : 1; unsigned char publisherPaidLeakyPaywallOptOut : 1; unsigned char publisherPaidWebOptIn : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasContentProvider;
@property (nonatomic) long long contentProvider;
@property (nonatomic) BOOL hasIsPublic;
@property (nonatomic) BOOL isPublic;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL isDeprecated;
@property (readonly, nonatomic) BOOL hasReplacementID;
@property (retain, nonatomic) NSString *replacementID;
@property (readonly, nonatomic) BOOL hasPrimaryAudience;
@property (retain, nonatomic) NSString *primaryAudience;
@property (readonly, nonatomic) BOOL hasParentID;
@property (retain, nonatomic) NSString *parentID;
@property (readonly, nonatomic) BOOL hasLogoURL;
@property (retain, nonatomic) NSString *logoURL;
@property (retain, nonatomic) NSMutableArray *iAdCategories;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;
@property (readonly, nonatomic) BOOL hasFeedConfiguration;
@property (retain, nonatomic) NTPBFeedConfiguration *feedConfiguration;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) long long score;
@property (readonly, nonatomic) BOOL hasNameImageURL;
@property (retain, nonatomic) NSString *nameImageURL;
@property (readonly, nonatomic) BOOL hasNameImageForDarkBackgroundURL;
@property (retain, nonatomic) NSString *nameImageForDarkBackgroundURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskURL;
@property (retain, nonatomic) NSString *nameImageMaskURL;
@property (readonly, nonatomic) BOOL hasNameImageMetadata;
@property (retain, nonatomic) NSData *nameImageMetadata;
@property (readonly, nonatomic) BOOL hasCoverImageURL;
@property (retain, nonatomic) NSString *coverImageURL;
@property (readonly, nonatomic) BOOL hasTemplateJson;
@property (retain, nonatomic) NSString *templateJson;
@property (retain, nonatomic) NSMutableArray *channelSectionIDs;
@property (readonly, nonatomic) BOOL hasChannelDefaultSectionID;
@property (retain, nonatomic) NSString *channelDefaultSectionID;
@property (retain, nonatomic) NSMutableArray *channelSectionFeedConfigurations;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic) BOOL hasIsExplicitContent;
@property (nonatomic) BOOL isExplicitContent;
@property (nonatomic) BOOL hasIsNotificationEnabled;
@property (nonatomic) BOOL isNotificationEnabled;
@property (readonly, nonatomic) BOOL hasPublisherPaidAuthorizationURL;
@property (retain, nonatomic) NSString *publisherPaidAuthorizationURL;
@property (readonly, nonatomic) BOOL hasPublisherPaidVerificationURL;
@property (retain, nonatomic) NSString *publisherPaidVerificationURL;
@property (readonly, nonatomic) BOOL hasPublisherPaidWebaccessURL;
@property (retain, nonatomic) NSString *publisherPaidWebaccessURL;
@property (retain, nonatomic) NSMutableArray *publisherPaidFeldsparablePurchaseIDs;
@property (retain, nonatomic) NSMutableArray *publisherPaidBundlePurchaseIDs;
@property (retain, nonatomic) NSMutableArray *purchaseOfferableConfigurations;
@property (nonatomic) BOOL hasPublisherPaidLeakyPaywallOptOut;
@property (nonatomic) BOOL publisherPaidLeakyPaywallOptOut;
@property (nonatomic) BOOL hasPublisherPaidWebOptIn;
@property (nonatomic) BOOL publisherPaidWebOptIn;
@property (nonatomic) BOOL hasNameImageBaselineShift;
@property (nonatomic) unsigned long long nameImageBaselineShift;
@property (nonatomic) BOOL hasNameImageScaleFactor;
@property (nonatomic) double nameImageScaleFactor;
@property (retain, nonatomic) NSMutableArray *iAdKeywords;
@property (readonly, nonatomic) BOOL hasNameImageMaskWidgetLQURL;
@property (retain, nonatomic) NSString *nameImageMaskWidgetLQURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskWidgetHQURL;
@property (retain, nonatomic) NSString *nameImageMaskWidgetHQURL;
@property (nonatomic) BOOL hasHideAccessoryText;
@property (nonatomic) BOOL hideAccessoryText;
@property (readonly, nonatomic) BOOL hasPublisherPaidDescriptionStrings;
@property (retain, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (readonly, nonatomic) BOOL hasNameCompact;
@property (retain, nonatomic) NSString *nameCompact;
@property (readonly, nonatomic) BOOL hasNameImageCompactURL;
@property (retain, nonatomic) NSString *nameImageCompactURL;
@property (readonly, nonatomic) BOOL hasNameImageCompactMetadata;
@property (retain, nonatomic) NSData *nameImageCompactMetadata;
@property (nonatomic) BOOL hasGroupingAvailability;
@property (nonatomic) int groupingAvailability;
@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL hasBehaviorFlags;
@property (nonatomic) long long behaviorFlags;
@property (readonly, nonatomic) BOOL hasArticleRecirculationConfiguration;
@property (retain, nonatomic) NSData *articleRecirculationConfiguration;
@property (retain, nonatomic) NSMutableArray *publisherSpecifiedArticleIds;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasPublisherSpecifiedArticleIdsModifiedDate;
@property (retain, nonatomic) NTPBDate *publisherSpecifiedArticleIdsModifiedDate;
@property (readonly, nonatomic) BOOL hasFeedNavImageURL;
@property (retain, nonatomic) NSString *feedNavImageURL;
@property (retain, nonatomic) NSMutableArray *latestIssueIDs;
@property (readonly, nonatomic) BOOL hasArchiveIssueListID;
@property (retain, nonatomic) NSString *archiveIssueListID;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasMagazineGenre;
@property (retain, nonatomic) NSString *magazineGenre;
@property (readonly, nonatomic) BOOL hasPaidBundlePaywallConfigurationJson;
@property (retain, nonatomic) NSString *paidBundlePaywallConfigurationJson;
@property (readonly, nonatomic) BOOL hasStocksFeedConfigurationJson;
@property (retain, nonatomic) NSString *stocksFeedConfigurationJson;
@property (readonly, nonatomic) BOOL hasSupergroupConfigJson;
@property (retain, nonatomic) NSString *supergroupConfigJson;
@property (readonly, nonatomic) BOOL hasSupergroupKnobsJson;
@property (retain, nonatomic) NSString *supergroupKnobsJson;
@property (nonatomic) BOOL hasPropertyFlags;
@property (nonatomic) long long propertyFlags;
@property (retain, nonatomic) NSMutableArray *recentIssueIDs;
@property (readonly, nonatomic) BOOL hasNameImageLargeURL;
@property (retain, nonatomic) NSString *nameImageLargeURL;
@property (readonly, nonatomic) BOOL hasNameImageLargeMaskURL;
@property (retain, nonatomic) NSString *nameImageLargeMaskURL;
@property (readonly, nonatomic) BOOL hasSuperfeedConfigResourceID;
@property (retain, nonatomic) NSString *superfeedConfigResourceID;

+ (Class)iAdCategoriesType;
+ (Class)iAdKeywordsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)publisherSpecifiedArticleIdsType;
+ (Class)channelSectionIDsType;
+ (Class)channelSectionFeedConfigurationsType;
+ (Class)publisherPaidFeldsparablePurchaseIDsType;
+ (Class)publisherPaidBundlePurchaseIDsType;
+ (Class)purchaseOfferableConfigurationType;
+ (Class)latestIssueIDsType;
+ (Class)recentIssueIDsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addIAdCategories:(id)a0;
- (void)addIAdKeywords:(id)a0;
- (void)addBlockedStorefrontIDs:(id)a0;
- (void)addAllowedStorefrontIDs:(id)a0;
- (void)addPublisherSpecifiedArticleIds:(id)a0;
- (void)clearIAdCategories;
- (unsigned long long)iAdCategoriesCount;
- (id)iAdCategoriesAtIndex:(unsigned long long)a0;
- (void)clearIAdKeywords;
- (unsigned long long)iAdKeywordsCount;
- (id)iAdKeywordsAtIndex:(unsigned long long)a0;
- (void)clearBlockedStorefrontIDs;
- (unsigned long long)blockedStorefrontIDsCount;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)a0;
- (void)clearAllowedStorefrontIDs;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)a0;
- (void)clearPublisherSpecifiedArticleIds;
- (unsigned long long)publisherSpecifiedArticleIdsCount;
- (id)publisherSpecifiedArticleIdsAtIndex:(unsigned long long)a0;
- (void)addChannelSectionIDs:(id)a0;
- (void)addChannelSectionFeedConfigurations:(id)a0;
- (void)addPublisherPaidFeldsparablePurchaseIDs:(id)a0;
- (void)addPublisherPaidBundlePurchaseIDs:(id)a0;
- (void)addPurchaseOfferableConfiguration:(id)a0;
- (void)addLatestIssueIDs:(id)a0;
- (void)addRecentIssueIDs:(id)a0;
- (void)clearChannelSectionIDs;
- (unsigned long long)channelSectionIDsCount;
- (id)channelSectionIDsAtIndex:(unsigned long long)a0;
- (void)clearChannelSectionFeedConfigurations;
- (unsigned long long)channelSectionFeedConfigurationsCount;
- (id)channelSectionFeedConfigurationsAtIndex:(unsigned long long)a0;
- (void)clearPublisherPaidFeldsparablePurchaseIDs;
- (unsigned long long)publisherPaidFeldsparablePurchaseIDsCount;
- (id)publisherPaidFeldsparablePurchaseIDsAtIndex:(unsigned long long)a0;
- (void)clearPublisherPaidBundlePurchaseIDs;
- (unsigned long long)publisherPaidBundlePurchaseIDsCount;
- (id)publisherPaidBundlePurchaseIDsAtIndex:(unsigned long long)a0;
- (void)clearPurchaseOfferableConfigurations;
- (unsigned long long)purchaseOfferableConfigurationsCount;
- (id)purchaseOfferableConfigurationAtIndex:(unsigned long long)a0;
- (void)clearLatestIssueIDs;
- (unsigned long long)latestIssueIDsCount;
- (id)latestIssueIDsAtIndex:(unsigned long long)a0;
- (void)clearRecentIssueIDs;
- (unsigned long long)recentIssueIDsCount;
- (id)recentIssueIDsAtIndex:(unsigned long long)a0;

@end
