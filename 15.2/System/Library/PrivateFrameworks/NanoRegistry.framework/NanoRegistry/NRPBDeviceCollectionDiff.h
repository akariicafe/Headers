@class NSMutableArray;

@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)pairingIDsType;
+ (Class)diffsType;

- (id)pairingIDsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)pairingIDsCount;
- (unsigned long long)hash;
- (void)clearPairingIDs;
- (void)addPairingIDs:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearDiffs;
- (void)addDiffs:(id)a0;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:(unsigned long long)a0;

@end
