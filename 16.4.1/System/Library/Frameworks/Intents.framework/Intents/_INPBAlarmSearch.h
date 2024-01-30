@class NSString, _INPBDataString, _INPBDateTimeRangeValue;

@interface _INPBAlarmSearch : PBCodable <_INPBAlarmSearch, NSSecureCoding, NSCopying> {
    struct { unsigned char alarmReferenceType : 1; unsigned char alarmSearchStatus : 1; unsigned char includeSleepAlarm : 1; unsigned char isMeridianInferred : 1; unsigned char period : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int alarmReferenceType;
@property (nonatomic) BOOL hasAlarmReferenceType;
@property (nonatomic) int alarmSearchStatus;
@property (nonatomic) BOOL hasAlarmSearchStatus;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL includeSleepAlarm;
@property (nonatomic) BOOL hasIncludeSleepAlarm;
@property (nonatomic) BOOL isMeridianInferred;
@property (nonatomic) BOOL hasIsMeridianInferred;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) int period;
@property (nonatomic) BOOL hasPeriod;
@property (retain, nonatomic) _INPBDateTimeRangeValue *time;
@property (readonly, nonatomic) BOOL hasTime;
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
- (int)StringAsAlarmReferenceType:(id)a0;
- (int)StringAsAlarmSearchStatus:(id)a0;
- (int)StringAsPeriod:(id)a0;
- (id)periodAsString:(int)a0;
- (id)alarmReferenceTypeAsString:(int)a0;
- (id)alarmSearchStatusAsString:(int)a0;

@end
