@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addBundleIds:(id)a0;
- (void)clearBundleIds;
- (unsigned long long)bundleIdsCount;
- (id)bundleIdsAtIndex:(unsigned long long)a0;

@end
