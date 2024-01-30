@class NSData, NSString;

@interface HDCodableSyncIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHardwareIdentifier;
@property (retain, nonatomic) NSData *hardwareIdentifier;
@property (readonly, nonatomic) BOOL hasDatabaseIdentifier;
@property (retain, nonatomic) NSData *databaseIdentifier;
@property (readonly, nonatomic) BOOL hasInstanceDiscriminator;
@property (retain, nonatomic) NSString *instanceDiscriminator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
