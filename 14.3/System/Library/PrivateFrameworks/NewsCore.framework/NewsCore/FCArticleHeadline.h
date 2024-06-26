@class NSURL, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, FCIssue, NSDate, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCTopStoriesStyleConfiguration, FCContentArchive, FCInterestToken, NSString, FCHeadlineThumbnail, NTPBArticleRecord, FCCoverArt, FCArticleAudioTrack, NSArray, FCHeadlineExperimentalTitleMetadata;
@protocol FCChannelProviding;

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields, FCArticleAccessCheckable, FCContentArchivable> {
    BOOL _hasThumbnail;
    BOOL _sponsored;
    BOOL _deleted;
    BOOL _featureCandidate;
    BOOL _needsRapidUpdates;
    BOOL _showMinimalChrome;
    BOOL _boundToContext;
    BOOL _hiddenFromFeeds;
    BOOL _pressRelease;
    BOOL _hiddenFromAutoFavorites;
    BOOL _webEmbedsEnabled;
    BOOL _issueOnly;
    BOOL _canBePurchased;
    BOOL _showBundleSoftPaywall;
    BOOL _useTransparentNavigationBar;
    NSString *_versionIdentifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_titleCompact;
    FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_globalConversionStats;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_publisherConversionStats;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    FCIssue *_masterIssue;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    FCCoverArt *_coverArt;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NSString *_language;
    unsigned long long _role;
    unsigned long long _halfLife;
    NSArray *_linkedArticleIDs;
    NSArray *_linkedIssueIDs;
    long long _bodyTextLength;
    FCArticleAudioTrack *_narrativeTrack;
    FCArticleAudioTrack *_narrativeTrackSample;
    NSString *_narrativeTrackTextRanges;
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVector;
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVectorAlt;
    NSString *_layeredThumbnailJSON;
    double _layeredThumbnailAspectRatio;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _thumbnailFocalFrame;
}

@property (retain, nonatomic) NTPBArticleRecord *articleRecord;
@property (retain, nonatomic) FCInterestToken *articleInterestToken;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long behaviorFlags;
@property (readonly, copy, nonatomic) NSString *stocksClusterID;
@property (readonly, copy, nonatomic) NSString *stocksMetadataJSON;
@property (readonly, copy, nonatomic) NSString *stocksScoresJSON;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, copy, nonatomic) id<FCChannelProviding> sourceChannel;
@property (readonly, nonatomic) BOOL isDraft;
@property (readonly, nonatomic) BOOL isLocalDraft;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

+ (BOOL)_forceArticlesToBeShownAsSponsored;
+ (BOOL)_simulateTopStoriesBadges;
+ (id)_tempOverrideMIMETypeForURL:(id)a0;
+ (BOOL)_fakeArticlesTimestamp;

- (id)language;
- (id)globalConversionStats;
- (id)lastFetchedDate;
- (double)layeredThumbnailAspectRatio;
- (id)clusterID;
- (void)setThumbnailHQ:(id)a0;
- (id)backingArticleRecordData;
- (void)setRole:(unsigned long long)a0;
- (long long)publisherArticleVersion;
- (id)thumbnail;
- (id)coverArt;
- (void)setThumbnailUltraHQ:(id)a0;
- (id)initWithArticleRecord:(id)a0 articleInterestToken:(id)a1 sourceChannel:(id)a2 masterIssue:(id)a3 storyStyleConfigs:(id)a4 storyTypeTimeout:(long long)a5 rapidUpdatesTimeout:(long long)a6 assetManager:(id)a7 experimentalTitleProvider:(id)a8;
- (BOOL)canBePurchased;
- (id)init;
- (id)publisherCohorts;
- (id)globalCohorts;
- (void)setStoryType:(unsigned long long)a0;
- (id)linkedIssueIDs;
- (void).cxx_destruct;
- (id)narrativeTrack;
- (id)iAdKeywords;
- (void)setThumbnailMedium:(id)a0;
- (BOOL)showBundleSoftPaywall;
- (id)primaryAudience;
- (id)articleID;
- (id)linkedArticleIDs;
- (id)titleCompact;
- (id)thumbnailLQ;
- (unsigned long long)role;
- (id)topics;
- (void)setThumbnail:(id)a0;
- (unsigned long long)contentType;
- (BOOL)hasAudioTrack;
- (void)setTitleCompact:(id)a0;
- (void)setArticleID:(id)a0;
- (id)referencedArticleID;
- (BOOL)webEmbedsEnabled;
- (id)thumbnailHQ;
- (void)setHalfLife:(unsigned long long)a0;
- (id)articleRecirculationConfigJSON;
- (BOOL)useTransparentNavigationBar;
- (BOOL)isDeleted;
- (id)shortExcerpt;
- (void)setSourceName:(id)a0;
- (void)setSponsored:(BOOL)a0;
- (id)accessoryText;
- (id)videoCallToActionTitle;
- (id)publisherID;
- (long long)bodyTextLength;
- (void)setContentType:(unsigned long long)a0;
- (void)setStoryStyle:(id)a0;
- (void)setAccessoryText:(id)a0;
- (id)topicIDs;
- (void)_adoptNarrativeTrackFromArticleRecord:(id)a0 assetManager:(id)a1;
- (BOOL)isIssueOnly;
- (BOOL)isPressRelease;
- (BOOL)isBoundToContext;
- (BOOL)isFeatureCandidate;
- (BOOL)isSponsored;
- (id)personalizationVector;
- (id)contentURL;
- (void)setPublishDate:(id)a0;
- (id)publisherSpecifiedArticleIDs;
- (id)thumbnailWidgetLQ;
- (id)videoCallToActionURL;
- (id)moreFromPublisherArticleIDs;
- (void)setClusterID:(id)a0;
- (id)iAdCategories;
- (id)sourceName;
- (id)narrativeTrackTextRanges;
- (void)setTopicIDs:(id)a0;
- (id)thumbnailWidgetHQ;
- (id)thumbnailMedium;
- (id)lastModifiedDate;
- (id)experimentalTitleMetadata;
- (void)setThumbnailLQ:(id)a0;
- (id)relatedArticleIDs;
- (id)storyStyle;
- (BOOL)needsRapidUpdates;
- (void)setDeleted:(BOOL)a0;
- (unsigned long long)halfLife;
- (BOOL)isHiddenFromAutoFavorites;
- (id)layeredThumbnailJSON;
- (long long)backendArticleVersion;
- (id)publisherConversionStats;
- (id)iAdSectionIDs;
- (double)videoDuration;
- (id)narrativeTrackSample;
- (id)thumbnailWidget;
- (id)contentWithContext:(id)a0;
- (BOOL)hasThumbnail;
- (id)personalizationVectorAlt;
- (BOOL)isHiddenFromFeeds;
- (void)setHasThumbnail:(BOOL)a0;
- (id)videoURL;
- (id)stocksFields;
- (id)publishDate;
- (void)setShortExcerpt:(id)a0;
- (unsigned long long)storyType;
- (BOOL)showMinimalChrome;
- (id)masterIssue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailFocalFrame;
- (id)versionIdentifier;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)thumbnailUltraHQ;
- (id)initWithArticleRecordData:(id)a0 sourceChannel:(id)a1 masterIssue:(id)a2 assetManager:(id)a3;

@end
