@class NSString, NSMutableArray;

@interface BCSDomainBundleIdPatterns : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *bundleIdPatterns;

+ (Class)bundleIdPatternsType;

- (void)clearBundleIdPatterns;
- (unsigned long long)bundleIdPatternsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)bundleIdPatternsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addBundleIdPatterns:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
