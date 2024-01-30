@class NSString, _INPBImageValue, _INPBValueMetadata;

@interface _INPBPaymentMethodValue : PBCodable <_INPBPaymentMethodValue, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBImageValue *icon;
@property (readonly, nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *identificationHint;
@property (readonly, nonatomic) BOOL hasIdentificationHint;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
