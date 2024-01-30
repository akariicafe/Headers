@class NTPBIssueViewData, NSString, NTPBIssueData, NSData;

@interface NTPBArticleEngagement : PBCodable <NSCopying> {
    struct { unsigned char articleOpenedAtTimestamp : 1; unsigned char eventTimestamp : 1; unsigned char articleEngagementType : 1; unsigned char utcOffset : 1; unsigned char isPaidSubscriber : 1; } _has;
}

@property (nonatomic) BOOL hasArticleEngagementType;
@property (nonatomic) int articleEngagementType;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSData *sessionId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) long long eventTimestamp;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) BOOL hasUtcOffset;
@property (nonatomic) int utcOffset;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasArticleOpenedAtTimestamp;
@property (nonatomic) long long articleOpenedAtTimestamp;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (nonatomic) BOOL isPaidSubscriber;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
