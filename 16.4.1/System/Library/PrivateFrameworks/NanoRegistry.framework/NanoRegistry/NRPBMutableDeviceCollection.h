@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *devices;

+ (Class)devicesType;
+ (Class)pairingIDsType;

- (void)clearPairingIDs;
- (id)pairingIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)devicesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addDevices:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)devicesAtIndex:(unsigned long long)a0;
- (void)clearDevices;
- (void).cxx_destruct;
- (unsigned long long)pairingIDsCount;
- (void)addPairingIDs:(id)a0;

@end
