@class NTPBIssueViewData, NTPBIssueData, NTPBIssueExposureData, NSString;

@interface NTPBIssueTocView : PBCodable <NSCopying> {
    struct { unsigned char parentFeedType : 1; unsigned char adSupportedChannel : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL adSupportedChannel;

- (void).cxx_destruct;
- (id)parentFeedTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsParentFeedType:(id)a0;

@end
