@class NSMutableArray;

@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)pairingIDsType;
+ (Class)diffsType;

- (unsigned long long)pairingIDsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearPairingIDs;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDiffs:(id)a0;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:(unsigned long long)a0;
- (void)addPairingIDs:(id)a0;
- (void)clearDiffs;
- (id)pairingIDsAtIndex:(unsigned long long)a0;

@end
