@class NSString;

@interface NTPBReportConcern : PBCodable <NSCopying> {
    struct { unsigned char backendArticleVersion : 1; unsigned char publisherArticleVersion : 1; unsigned char articleFeedCellHostType : 1; unsigned char articleFeedCellSection : 1; unsigned char articleParentFeedType : 1; unsigned char concernReason : 1; unsigned char contentType : 1; unsigned char feedFeedType : 1; unsigned char feedViewPresentationReason : 1; unsigned char originProductType : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (nonatomic) int reportVersion;
@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) BOOL hasConcernReason;
@property (nonatomic) int concernReason;
@property (readonly, nonatomic) BOOL hasConcernComments;
@property (retain, nonatomic) NSString *concernComments;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic) int contentType;
@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) long long backendArticleVersion;
@property (readonly, nonatomic) BOOL hasArticleParentFeedId;
@property (retain, nonatomic) NSString *articleParentFeedId;
@property (nonatomic) BOOL hasArticleParentFeedType;
@property (nonatomic) int articleParentFeedType;
@property (nonatomic) BOOL hasFeedFeedType;
@property (nonatomic) int feedFeedType;
@property (nonatomic) BOOL hasArticleFeedCellHostType;
@property (nonatomic) int articleFeedCellHostType;
@property (nonatomic) BOOL hasArticleFeedCellSection;
@property (nonatomic) int articleFeedCellSection;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (nonatomic) int feedViewPresentationReason;
@property (readonly, nonatomic) BOOL hasFeedPresentationSearchString;
@property (retain, nonatomic) NSString *feedPresentationSearchString;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasOriginProductType;
@property (nonatomic) int originProductType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsArticleFeedCellSection:(id)a0;
- (int)StringAsArticleParentFeedType:(id)a0;
- (int)StringAsContentType:(id)a0;
- (int)StringAsFeedFeedType:(id)a0;
- (int)StringAsFeedViewPresentationReason:(id)a0;
- (int)StringAsArticleFeedCellHostType:(id)a0;
- (id)articleFeedCellSectionAsString:(int)a0;
- (id)articleFeedCellHostTypeAsString:(int)a0;
- (id)articleParentFeedTypeAsString:(int)a0;
- (id)contentTypeAsString:(int)a0;
- (id)feedFeedTypeAsString:(int)a0;
- (id)feedViewPresentationReasonAsString:(int)a0;

@end
