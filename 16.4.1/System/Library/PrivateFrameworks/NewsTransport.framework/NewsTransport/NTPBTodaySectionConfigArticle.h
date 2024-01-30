@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasDisplayDateString;
@property (retain, nonatomic) NSString *displayDateString;
@property (readonly, nonatomic) BOOL hasStoryType;
@property (retain, nonatomic) NSString *storyType;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPaidArticle;
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *paidArticle;
@property (readonly, nonatomic) BOOL hasActionURLString;
@property (retain, nonatomic) NSString *actionURLString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
