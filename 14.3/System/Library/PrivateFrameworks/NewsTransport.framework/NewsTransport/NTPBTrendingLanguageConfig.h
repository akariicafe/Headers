@class NSString, NSMutableArray;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (retain, nonatomic) NSString *languageTag;
@property (retain, nonatomic) NSMutableArray *trendingTopics;

+ (Class)trendingTopicsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addTrendingTopics:(id)a0;
- (void)clearTrendingTopics;
- (unsigned long long)trendingTopicsCount;
- (id)trendingTopicsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
