@class NSString, _INPBSettingMetadata, _INPBIntentMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetLabeledSettingIntent : PBCodable <_INPBSetLabeledSettingIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSString *labeledValue;
@property (readonly, nonatomic) BOOL hasLabeledValue;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
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
