@class _INPBValueMetadata, NSString;

@interface _INPBPowerValue : PBCodable <_INPBPowerValue, NSSecureCoding, NSCopying> {
    struct { unsigned char magnitude : 1; unsigned char unit : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double magnitude;
@property (nonatomic) BOOL hasMagnitude;
@property (nonatomic) int unit;
@property (nonatomic) BOOL hasUnit;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
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
- (id)unitAsString:(int)a0;
- (int)StringAsUnit:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
