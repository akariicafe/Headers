@class _INPBDateTimeRange, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBCreateAlarmIntent : PBCodable <_INPBCreateAlarmIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _alarmRepeatScheduleOptions;
    struct { unsigned char relativeOffsetInMinutes : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int *alarmRepeatScheduleOptions;
@property (readonly, nonatomic) unsigned long long alarmRepeatScheduleOptionsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) int relativeOffsetInMinutes;
@property (nonatomic) BOOL hasRelativeOffsetInMinutes;
@property (retain, nonatomic) _INPBDateTimeRange *time;
@property (readonly, nonatomic) BOOL hasTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearAlarmRepeatScheduleOptions;
- (void)addAlarmRepeatScheduleOptions:(int)a0;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)a0;
- (void)setAlarmRepeatScheduleOptions:(int *)a0 count:(unsigned long long)a1;
- (id)alarmRepeatScheduleOptionsAsString:(int)a0;
- (int)StringAsAlarmRepeatScheduleOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
