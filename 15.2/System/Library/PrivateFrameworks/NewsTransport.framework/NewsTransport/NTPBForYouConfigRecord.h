@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBForYouConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (readonly, nonatomic) BOOL hasTrendingArticleListID;
@property (retain, nonatomic) NSString *trendingArticleListID;
@property (retain, nonatomic) NSMutableArray *editorialArticleListIDs;
@property (retain, nonatomic) NSMutableArray *editorialSectionTagIDs;
@property (readonly, nonatomic) BOOL hasSpotlightArticleID;
@property (retain, nonatomic) NSString *spotlightArticleID;
@property (retain, nonatomic) NSMutableArray *todayFeedTopStoriesArticleIDs;
@property (readonly, nonatomic) BOOL hasTodayFeedConfiguration;
@property (retain, nonatomic) NSString *todayFeedConfiguration;

+ (Class)editorialArticleListIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)todayFeedTopStoriesArticleIDsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addEditorialArticleListIDs:(id)a0;
- (void)addEditorialSectionTagIDs:(id)a0;
- (void)addTodayFeedTopStoriesArticleIDs:(id)a0;
- (void)clearEditorialArticleListIDs;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)a0;
- (void)clearEditorialSectionTagIDs;
- (unsigned long long)editorialSectionTagIDsCount;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)a0;
- (void)clearTodayFeedTopStoriesArticleIDs;
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)a0;

@end
