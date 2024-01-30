@class _INPBSleepAlarmAttribute, NSString, _INPBDateTime, _INPBDataString;

@interface _INPBAlarm : PBCodable <_INPBAlarm, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _alarmRepeatScheduleOptions;
    struct { unsigned char enabled : 1; unsigned char firing : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int *alarmRepeatScheduleOptions;
@property (readonly, nonatomic) unsigned long long alarmRepeatScheduleOptionsCount;
@property (retain, nonatomic) _INPBDateTime *dateTime;
@property (readonly, nonatomic) BOOL hasDateTime;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL firing;
@property (nonatomic) BOOL hasFiring;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) _INPBSleepAlarmAttribute *sleepAlarmAttribute;
@property (readonly, nonatomic) BOOL hasSleepAlarmAttribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearAlarmRepeatScheduleOptions;
- (int)StringAsAlarmRepeatScheduleOptions:(id)a0;
- (void)addAlarmRepeatScheduleOptions:(int)a0;
- (id)alarmRepeatScheduleOptionsAsString:(int)a0;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)a0;
- (void)setAlarmRepeatScheduleOptions:(int *)a0 count:(unsigned long long)a1;

@end
