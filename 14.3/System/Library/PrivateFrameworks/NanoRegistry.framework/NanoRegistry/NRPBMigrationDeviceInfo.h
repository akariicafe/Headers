@class NSData, NSString;

@interface NRPBMigrationDeviceInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasID;
@property (retain, nonatomic) NSData *iD;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasAdvertisedName;
@property (retain, nonatomic) NSString *advertisedName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
