@class _INPBDateTimeRangeValue, _INPBSettingMetadata, NSString, _INPBIntentMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetTemporalSettingIntent : PBCodable <_INPBSetTemporalSettingIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char action : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (retain, nonatomic) _INPBDateTimeRangeValue *timeValue;
@property (readonly, nonatomic) BOOL hasTimeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
