@class NSData, NSMutableArray;

@interface NRPBMigrationDevices : PBCodable <NSCopying> {
    NSMutableArray *_devices;
    NSData *_phoneUDIDHash;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
