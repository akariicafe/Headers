@class NSDate, NSString, NSArray, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, CKRecord, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata;
@protocol FCChannelProviding;

@interface FCSparseScorableArticle : NSObject <FCFeedTransformationItem> {
    CKRecord *_articleRecord;
    NSString *_storefrontID;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *_conversionStats;
}

@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) unsigned long long order;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property (readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) long long publisherArticleVersion;
@property (readonly, nonatomic) BOOL canBePurchased;
@property (readonly, copy, nonatomic) id<FCChannelProviding> sourceChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) unsigned long long halfLife;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) long long bodyTextLength;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) unsigned long long halfLifeOverride;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;

- (void)enumerateTopicCohortsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerateTopicConversionStatsWithBlock:(id /* block */)a0;

@end
