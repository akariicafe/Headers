@class NSString, _INPBNumericSettingValue;

@interface _INPBSetNumericSettingIntentResponse : PBCodable <_INPBSetNumericSettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (retain, nonatomic) _INPBNumericSettingValue *maxValue;
@property (readonly, nonatomic) BOOL hasMaxValue;
@property (retain, nonatomic) _INPBNumericSettingValue *minValue;
@property (readonly, nonatomic) BOOL hasMinValue;
@property (retain, nonatomic) _INPBNumericSettingValue *oldValue;
@property (readonly, nonatomic) BOOL hasOldValue;
@property (retain, nonatomic) _INPBNumericSettingValue *updatedValue;
@property (readonly, nonatomic) BOOL hasUpdatedValue;
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

@end
