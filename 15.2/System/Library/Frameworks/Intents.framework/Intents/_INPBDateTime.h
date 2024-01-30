@class _INPBLocalDate, _INPBLocalTime, NSString;

@interface _INPBDateTime : PBCodable <_INPBDateTime, NSSecureCoding, NSCopying> {
    struct { unsigned char calendarSystem : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int calendarSystem;
@property (nonatomic) BOOL hasCalendarSystem;
@property (retain, nonatomic) _INPBLocalDate *date;
@property (readonly, nonatomic) BOOL hasDate;
@property (retain, nonatomic) _INPBLocalTime *time;
@property (readonly, nonatomic) BOOL hasTime;
@property (copy, nonatomic) NSString *timeZoneID;
@property (readonly, nonatomic) BOOL hasTimeZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)calendarSystemAsString:(int)a0;
- (int)StringAsCalendarSystem:(id)a0;
- (id)dictionaryRepresentation;

@end
