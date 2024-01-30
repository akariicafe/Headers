@class NSString, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIssueID;
@property (retain, nonatomic) NSString *issueID;
@property (readonly, nonatomic) BOOL hasLastVisitedPBDate;
@property (retain, nonatomic) NTPBDate *lastVisitedPBDate;
@property (readonly, nonatomic) BOOL hasLastVisitedArticleID;
@property (retain, nonatomic) NSString *lastVisitedArticleID;
@property (readonly, nonatomic) BOOL hasLastVisitedPageID;
@property (retain, nonatomic) NSString *lastVisitedPageID;
@property (readonly, nonatomic) BOOL hasLastBadgedPBDate;
@property (retain, nonatomic) NTPBDate *lastBadgedPBDate;
@property (readonly, nonatomic) BOOL hasLastEngagedPBDate;
@property (retain, nonatomic) NTPBDate *lastEngagedPBDate;
@property (readonly, nonatomic) BOOL hasLastRemovedFromMyMagazinesPBDate;
@property (retain, nonatomic) NTPBDate *lastRemovedFromMyMagazinesPBDate;
@property (readonly, nonatomic) BOOL hasLastSeenPBDate;
@property (retain, nonatomic) NTPBDate *lastSeenPBDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
