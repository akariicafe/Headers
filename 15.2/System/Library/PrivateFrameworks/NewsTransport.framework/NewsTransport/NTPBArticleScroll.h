@class NTPBIssueViewData, NSString, NTPBIssueData, NSData, NTPBAlternateHeadline, NSMutableArray, NTPBIssueExposureData;

@interface NTPBArticleScroll : PBCodable <NSCopying> {
    struct { unsigned char scrollHostViewType : 1; unsigned char scrollingVelocity : 1; unsigned char verticalScrollPositionEnding : 1; unsigned char verticalScrollPositionStarting : 1; unsigned char adSupportedChannel : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasScrollHostViewType;
@property (nonatomic) int scrollHostViewType;
@property (readonly, nonatomic) BOOL hasVerticalScrollPositionStart;
@property (retain, nonatomic) NSString *verticalScrollPositionStart;
@property (readonly, nonatomic) BOOL hasVerticalScrollPositionEnd;
@property (retain, nonatomic) NSString *verticalScrollPositionEnd;
@property (readonly, nonatomic) BOOL hasScrollVelocity;
@property (retain, nonatomic) NSString *scrollVelocity;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL adSupportedChannel;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (nonatomic) BOOL hasVerticalScrollPositionStarting;
@property (nonatomic) float verticalScrollPositionStarting;
@property (nonatomic) BOOL hasVerticalScrollPositionEnding;
@property (nonatomic) float verticalScrollPositionEnding;
@property (nonatomic) BOOL hasScrollingVelocity;
@property (nonatomic) float scrollingVelocity;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;

+ (Class)fractionalCohortMembershipType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addFractionalCohortMembership:(id)a0;
- (void)clearFractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)a0;

@end
