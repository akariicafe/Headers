@class _INPBSettingMetadata, NSString, _INPBIntentMetadata;

@interface _INPBGetSettingIntent : PBCodable <_INPBGetSettingIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationValue : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int confirmationValue;
@property (nonatomic) BOOL hasConfirmationValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)confirmationValueAsString:(int)a0;
- (int)StringAsConfirmationValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
