@class NSDate, NSString, NSArray, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, FCInterestToken, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCAssetHandle, FCContentArchive, NTPBIssueRecord, FCColor;
@protocol FCChannelProviding;

@interface FCIssue : NSObject <FCFeedPersonalizingItem, FCIssueAccessCheckable, NSCopying, FCContentArchivable>

@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) unsigned long long halfLife;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) long long bodyTextLength;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (readonly, nonatomic) NTPBIssueRecord *issueRecord;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDate *publicationDate;
@property (readonly, copy, nonatomic) NSString *coverDate;
@property (readonly, nonatomic) FCAssetHandle *metadataJSONAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property (readonly, nonatomic) double coverImageAspectRatio;
@property (readonly, copy, nonatomic) FCColor *coverImagePrimaryColor;
@property (readonly, copy, nonatomic) NSString *layeredCoverJSON;
@property (readonly, nonatomic) double layeredCoverAspectRatio;
@property (readonly, copy, nonatomic) FCColor *layeredCoverPrimaryColor;
@property (readonly, nonatomic) BOOL isCurrent;
@property (readonly, nonatomic) BOOL isDraft;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, copy, nonatomic) NSString *notificationDescription;
@property (readonly, copy, nonatomic) NSString *issueDescription;
@property (readonly, copy, nonatomic) NSArray *allArticleIDs;
@property (readonly, copy, nonatomic) NSString *coverArticleID;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, copy, nonatomic) NSArray *topicTagIDs;
@property (readonly, copy, nonatomic) id<FCChannelProviding> sourceChannel;
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isLocalDraft;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

+ (BOOL)_fakeIssuesTimestamp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIssue:(id)a0 overrides:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 sourceChannel:(id)a1 assetManager:(id)a2;
- (id)initWithIssueRecord:(id)a0 assetManager:(id)a1 interestToken:(id)a2 sourceChannel:(id)a3;
- (void)enumerateTopicCohortsWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 title:(id)a2 publicationDate:(id)a3 coverDate:(id)a4 metadataJSONAssetHandle:(id)a5 coverImageAssetHandle:(id)a6 coverImageAspectRatio:(double)a7 coverImagePrimaryColor:(id)a8 layeredCoverJSON:(id)a9 layeredCoverAspectRatio:(double)a10 layeredCoverPrimaryColor:(id)a11 isCurrent:(BOOL)a12 isDraft:(BOOL)a13 isPaid:(BOOL)a14 minimumNewsVersion:(long long)a15 allArticleIDs:(id)a16 coverArticleID:(id)a17 allowedStorefrontIDs:(id)a18 blockedStorefrontIDs:(id)a19 topicTagIDs:(id)a20 sourceChannel:(id)a21 notificationDescription:(id)a22 issueDescription:(id)a23;
- (void)enumerateTopicConversionStatsWithBlock:(id /* block */)a0;

@end
