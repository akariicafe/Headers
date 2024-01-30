@class NSData, HMPBCharacteristicReference;

@interface HMPBCharacteristicWriteAction : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasActionUUID;
@property (retain, nonatomic) NSData *actionUUID;
@property (readonly, nonatomic) BOOL hasTargetValue;
@property (retain, nonatomic) NSData *targetValue;
@property (readonly, nonatomic) BOOL hasCharacteristicReference;
@property (retain, nonatomic) HMPBCharacteristicReference *characteristicReference;

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

@end
