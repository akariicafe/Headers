@class NSString, _INPBHomeAttributeRange;

@interface _INPBHomeAttributeValue : PBCodable <_INPBHomeAttributeValue, NSSecureCoding, NSCopying> {
    struct { unsigned char booleanValue : 1; unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char limitValue : 1; unsigned char unit : 1; unsigned char valueType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL booleanValue;
@property (nonatomic) BOOL hasBooleanValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (nonatomic) int limitValue;
@property (nonatomic) BOOL hasLimitValue;
@property (retain, nonatomic) _INPBHomeAttributeRange *rangeValue;
@property (readonly, nonatomic) BOOL hasRangeValue;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) int unit;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) int valueType;
@property (nonatomic) BOOL hasValueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsLimitValue:(id)a0;
- (int)StringAsValueType:(id)a0;
- (int)StringAsUnit:(id)a0;
- (id)limitValueAsString:(int)a0;
- (id)unitAsString:(int)a0;
- (id)valueTypeAsString:(int)a0;

@end
