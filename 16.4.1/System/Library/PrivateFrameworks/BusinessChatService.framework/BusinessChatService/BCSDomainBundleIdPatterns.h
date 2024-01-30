@class NSString, NSMutableArray;

@interface BCSDomainBundleIdPatterns : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *bundleIdPatterns;

+ (Class)bundleIdPatternsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addBundleIdPatterns:(id)a0;
- (id)bundleIdPatternsAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleIdPatternsCount;
- (void)clearBundleIdPatterns;

@end
