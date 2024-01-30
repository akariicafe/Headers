@class NSString, NSMutableArray;

@interface NTPBTrendingConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFallbackLanguageTag;
@property (retain, nonatomic) NSString *fallbackLanguageTag;
@property (retain, nonatomic) NSMutableArray *languageConfigs;

+ (Class)languageConfigsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addLanguageConfigs:(id)a0;
- (id)description;
- (void)clearLanguageConfigs;
- (unsigned long long)languageConfigsCount;
- (id)languageConfigsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
