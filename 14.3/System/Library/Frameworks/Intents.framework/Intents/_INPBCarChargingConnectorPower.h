@class _INPBPower, NSString;

@interface _INPBCarChargingConnectorPower : PBCodable <_INPBCarChargingConnectorPower, NSSecureCoding, NSCopying> {
    struct { unsigned char chargingConnector : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int chargingConnector;
@property (nonatomic) BOOL hasChargingConnector;
@property (retain, nonatomic) _INPBPower *maximumPower;
@property (readonly, nonatomic) BOOL hasMaximumPower;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)chargingConnectorAsString:(int)a0;
- (int)StringAsChargingConnector:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
