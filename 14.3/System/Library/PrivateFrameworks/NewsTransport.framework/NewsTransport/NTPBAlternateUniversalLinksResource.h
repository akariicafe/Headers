@class NSMutableArray;

@interface NTPBAlternateUniversalLinksResource : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *purchaseIDPatternPairs;
@property (retain, nonatomic) NSMutableArray *otherPatterns;
@property (retain, nonatomic) NSMutableArray *patternJSONPairs;

+ (Class)purchaseIDPatternPairsType;
+ (Class)otherPatternsType;
+ (Class)patternJSONPairsType;

- (void)clearPatternJSONPairs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)patternJSONPairsCount;
- (BOOL)readFrom:(id)a0;
- (id)otherPatternsAtIndex:(unsigned long long)a0;
- (id)patternJSONPairsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearOtherPatterns;
- (id)description;
- (void)clearPurchaseIDPatternPairs;
- (unsigned long long)purchaseIDPatternPairsCount;
- (unsigned long long)otherPatternsCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPurchaseIDPatternPairs:(id)a0;
- (void)addOtherPatterns:(id)a0;
- (void)addPatternJSONPairs:(id)a0;
- (id)purchaseIDPatternPairsAtIndex:(unsigned long long)a0;

@end
