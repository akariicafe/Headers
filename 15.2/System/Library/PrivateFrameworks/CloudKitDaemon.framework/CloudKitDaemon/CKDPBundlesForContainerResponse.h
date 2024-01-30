@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIDs;

+ (Class)bundleIDType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addBundleID:(id)a0;
- (unsigned long long)bundleIDsCount;
- (void)clearBundleIDs;
- (id)bundleIDAtIndex:(unsigned long long)a0;

@end
