@class NSString;

@interface _INPBCarHeadUnit : PBCodable <_INPBCarHeadUnit, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bluetoothIdentifier;
@property (readonly, nonatomic) BOOL hasBluetoothIdentifier;
@property (copy, nonatomic) NSString *iAP2Identifier;
@property (readonly, nonatomic) BOOL hasIAP2Identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
