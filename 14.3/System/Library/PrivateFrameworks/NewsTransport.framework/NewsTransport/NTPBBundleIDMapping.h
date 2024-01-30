@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addBundleIds:(id)a0;
- (id)bundleIdsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;

@end
