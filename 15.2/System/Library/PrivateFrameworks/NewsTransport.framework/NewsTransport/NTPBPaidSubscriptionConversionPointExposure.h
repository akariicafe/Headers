@class NSString, NSData, NTPBIssueData;

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char paidSubscriptionConversionPointExposureLocation : 1; unsigned char paidSubscriptionConversionPointExposurePresentationReason : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char purchaseType : 1; unsigned char userAction : 1; unsigned char arrivedFromAd : 1; unsigned char subscriptionOnlyArticlePreview : 1; } _has;
}

@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) int paidSubscriptionConversionPointExposurePresentationReason;
@property (readonly, nonatomic) BOOL hasSectionId;
@property (retain, nonatomic) NSString *sectionId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
@property (nonatomic) BOOL subscriptionOnlyArticlePreview;
@property (nonatomic) BOOL hasArrivedFromAd;
@property (nonatomic) BOOL arrivedFromAd;
@property (readonly, nonatomic) BOOL hasIadQtoken;
@property (retain, nonatomic) NSString *iadQtoken;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic) BOOL hasPurchaseType;
@property (nonatomic) int purchaseType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)groupTypeAsString:(int)a0;
- (int)StringAsGroupType:(id)a0;
- (id)purchaseTypeAsString:(int)a0;
- (int)StringAsPurchaseType:(id)a0;
- (id)parentFeedTypeAsString:(int)a0;
- (int)StringAsParentFeedType:(id)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (int)StringAsPaidSubscriptionConversionPointType:(id)a0;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)a0;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)a0;

@end
