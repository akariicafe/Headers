@class NSMutableArray;

@interface GEOLPRPlateMatchCondition : PBCodable <NSCopying> {
    NSMutableArray *_patterns;
}

@property (retain, nonatomic) NSMutableArray *patterns;

+ (Class)patternsType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPatterns:(id)a0;
- (unsigned long long)patternsCount;
- (void)clearPatterns;
- (id)patternsAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
