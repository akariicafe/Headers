@class NSString, NSMutableArray;

@interface NTPBPurchaseIDPatternPair : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *purchaseID;
@property (retain, nonatomic) NSMutableArray *domainPatterns;

+ (Class)domainPatternType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDomainPattern:(id)a0;
- (void)clearDomainPatterns;
- (unsigned long long)domainPatternsCount;
- (id)domainPatternAtIndex:(unsigned long long)a0;

@end
