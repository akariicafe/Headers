@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *devices;

+ (Class)pairingIDsType;
+ (Class)devicesType;

- (unsigned long long)devicesCount;
- (id)pairingIDsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)addDevices:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearDevices;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)pairingIDsCount;
- (unsigned long long)hash;
- (void)clearPairingIDs;
- (id)devicesAtIndex:(unsigned long long)a0;
- (void)addPairingIDs:(id)a0;
- (id)dictionaryRepresentation;

@end
