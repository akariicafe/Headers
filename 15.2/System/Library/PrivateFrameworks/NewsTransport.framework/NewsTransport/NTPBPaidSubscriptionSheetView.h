@class NSString, NSData;

@interface NTPBPaidSubscriptionSheetView : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char paidSubscriptionConversionPointExposureLocation : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char paidSubscriptionSheetViewPresentationReason : 1; unsigned char parentFeedType : 1; unsigned char userAction : 1; unsigned char arrivedFromAd : 1; unsigned char subscriptionOnlyArticlePreview : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasPaidSubscriptionSheetViewPresentationReason;
@property (nonatomic) int paidSubscriptionSheetViewPresentationReason;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
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
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;

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
- (id)parentFeedTypeAsString:(int)a0;
- (int)StringAsParentFeedType:(id)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (int)StringAsPaidSubscriptionConversionPointType:(id)a0;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)a0;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)a0;

@end
