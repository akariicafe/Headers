@class NSData, NSMutableArray;

@interface NRPBMigrationDevices : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *devices;
@property (readonly, nonatomic) BOOL hasPhoneUDIDHash;
@property (retain, nonatomic) NSData *phoneUDIDHash;

+ (Class)devicesType;

- (void)clearDevices;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)devicesAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)devicesCount;
- (void)addDevices:(id)a0;

@end
