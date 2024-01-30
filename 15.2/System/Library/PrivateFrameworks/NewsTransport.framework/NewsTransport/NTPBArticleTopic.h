@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface NTPBArticleTopic : PBCodable <NSCopying> {
    struct { unsigned char flowRate : 1; unsigned char quality : 1; unsigned char subscriptionRate : 1; unsigned char isEligibleForGrouping : 1; unsigned char isEligibleForGroupingIfAutofavorited : 1; unsigned char isEligibleForGroupingIfFavorited : 1; unsigned char isHidden : 1; unsigned char isManagedTopic : 1; unsigned char isManagedTopicWinner : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (readonly, nonatomic) BOOL hasCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts;
@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL hasIsEligibleForGrouping;
@property (nonatomic) BOOL isEligibleForGrouping;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited;
@property (readonly, nonatomic) BOOL hasConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *conversionStats;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfAutofavorited;
@property (nonatomic) BOOL isEligibleForGroupingIfAutofavorited;
@property (nonatomic) BOOL hasIsManagedTopic;
@property (nonatomic) BOOL isManagedTopic;
@property (nonatomic) BOOL hasIsManagedTopicWinner;
@property (nonatomic) BOOL isManagedTopicWinner;
@property (nonatomic) BOOL hasFlowRate;
@property (nonatomic) double flowRate;
@property (nonatomic) BOOL hasSubscriptionRate;
@property (nonatomic) double subscriptionRate;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) double quality;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
