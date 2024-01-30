@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBAudioConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (readonly, nonatomic) BOOL hasDailyBriefingArticleID;
@property (retain, nonatomic) NSString *dailyBriefingArticleID;
@property (readonly, nonatomic) BOOL hasFeaturedAudioArticleListID;
@property (retain, nonatomic) NSString *featuredAudioArticleListID;
@property (retain, nonatomic) NSMutableArray *heroArticleIDs;
@property (readonly, nonatomic) BOOL hasLatestAudioArticleListID;
@property (retain, nonatomic) NSString *latestAudioArticleListID;

+ (Class)heroArticleIDsType;

- (id)heroArticleIDsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (unsigned long long)heroArticleIDsCount;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)addHeroArticleIDs:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearHeroArticleIDs;

@end
