@class COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData, NSString, COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData, NSMutableArray, COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposure : PBCodable <NSCopying> {
    struct { unsigned char agedPersonalizationScore : 1; unsigned char agedUserFeedbackScore : 1; unsigned char autoSubscribeCtr : 1; unsigned char computedGlobalScoreCoefficient : 1; unsigned char diversifiedPersonalizationScore : 1; unsigned char featureCtr : 1; unsigned char globalScore : 1; unsigned char paidNonpaidSubscriptionCtr : 1; unsigned char personalizationScore : 1; unsigned char subscribedChannelCtr : 1; unsigned char userFeedbackScore : 1; unsigned char displayRank : 1; unsigned char groupType : 1; unsigned char parentFeedType : 1; unsigned char adSupportedChannel : 1; unsigned char isPaidSubscriberToSourceChannel : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData *issueExposureData;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData *channelData;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) BOOL hasFeatureCtr;
@property (nonatomic) double featureCtr;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasGlobalScore;
@property (nonatomic) double globalScore;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) BOOL hasAgedUserFeedbackScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;

+ (Class)fractionalCohortMembershipType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (void)addFractionalCohortMembership:(id)a0;
- (void)clearFractionalCohortMemberships;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)a0;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)groupTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;

@end
