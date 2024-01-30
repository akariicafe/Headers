@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char maxArticlesShown : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *mandatoryArticles;
@property (retain, nonatomic) NSMutableArray *personalizedArticles;
@property (nonatomic) BOOL hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)mandatoryArticlesType;
+ (Class)personalizedArticlesType;

- (BOOL)readFrom:(id)a0;
- (void)addMandatoryArticles:(id)a0;
- (void)addPersonalizedArticles:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)clearMandatoryArticles;
- (unsigned long long)mandatoryArticlesCount;
- (id)mandatoryArticlesAtIndex:(unsigned long long)a0;
- (void)clearPersonalizedArticles;
- (unsigned long long)personalizedArticlesCount;
- (id)personalizedArticlesAtIndex:(unsigned long long)a0;

@end
