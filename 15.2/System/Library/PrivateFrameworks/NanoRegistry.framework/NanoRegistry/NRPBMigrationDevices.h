@class NSData, NSMutableArray;

@interface NRPBMigrationDevices : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *devices;
@property (readonly, nonatomic) BOOL hasPhoneUDIDHash;
@property (retain, nonatomic) NSData *phoneUDIDHash;

+ (Class)devicesType;

- (unsigned long long)devicesCount;
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
- (unsigned long long)hash;
- (id)devicesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
