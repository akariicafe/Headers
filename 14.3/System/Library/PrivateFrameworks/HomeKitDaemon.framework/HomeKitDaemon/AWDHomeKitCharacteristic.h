@class NSString;

@interface AWDHomeKitCharacteristic : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceType;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) BOOL hasCharacteristicType;
@property (retain, nonatomic) NSString *characteristicType;

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
