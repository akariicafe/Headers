@class NSMutableArray;

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *articles;

+ (Class)articlesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearArticles;
- (unsigned long long)articlesCount;
- (id)articlesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addArticles:(id)a0;

@end
