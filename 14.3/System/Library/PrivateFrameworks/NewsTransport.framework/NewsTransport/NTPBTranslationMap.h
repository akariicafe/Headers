@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicLanguageBuckets;
@property (retain, nonatomic) NSMutableArray *favoritesLanguageBuckets;

+ (Class)topicLanguageBucketsType;
+ (Class)favoritesLanguageBucketsType;

- (void).cxx_destruct;
- (void)addTopicLanguageBuckets:(id)a0;
- (void)addFavoritesLanguageBuckets:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTopicLanguageBuckets;
- (unsigned long long)topicLanguageBucketsCount;
- (id)topicLanguageBucketsAtIndex:(unsigned long long)a0;
- (void)clearFavoritesLanguageBuckets;
- (unsigned long long)favoritesLanguageBucketsCount;
- (id)favoritesLanguageBucketsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
