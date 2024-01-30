@class NSString, _INPBInteger, _INPBValueMetadata, _INPBDouble;

@interface _INPBWellnessValue : PBCodable <_INPBWellnessValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDouble *pbDoubleValue;
@property (readonly, nonatomic) BOOL hasPbDoubleValue;
@property (retain, nonatomic) _INPBInteger *ordinalValue;
@property (readonly, nonatomic) BOOL hasOrdinalValue;
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
- (void)encodeWithCoder:(id)a0;

@end
