@class _INPBValueMetadata, NSString;

@interface _INPBDecimalNumberValue : PBCodable <_INPBDecimalNumberValue, NSSecureCoding, NSCopying> {
    struct { unsigned char exponent : 1; unsigned char isNegative : 1; unsigned char mantissa : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int exponent;
@property (nonatomic) BOOL hasExponent;
@property (nonatomic) BOOL isNegative;
@property (nonatomic) BOOL hasIsNegative;
@property (nonatomic) unsigned long long mantissa;
@property (nonatomic) BOOL hasMantissa;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
