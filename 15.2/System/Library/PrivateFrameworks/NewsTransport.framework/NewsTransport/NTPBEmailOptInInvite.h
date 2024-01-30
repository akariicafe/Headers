@class NSString;

@interface NTPBEmailOptInInvite : PBCodable <NSCopying> {
    struct { unsigned char emailOptInInviteLocation : 1; unsigned char newsletterSubscriptionType : 1; unsigned char parentFeedType : 1; unsigned char userAction : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasEmailOptInInviteLocation;
@property (nonatomic) int emailOptInInviteLocation;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) BOOL hasNewsletterSubscriptionType;
@property (nonatomic) int newsletterSubscriptionType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)parentFeedTypeAsString:(int)a0;
- (int)StringAsParentFeedType:(id)a0;

@end
