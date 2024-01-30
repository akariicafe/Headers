@class NSString;

@interface _INPBLocalTime : PBCodable <_INPBLocalTime, NSSecureCoding, NSCopying> {
    struct { unsigned char hourOfDay : 1; unsigned char millisOfSecond : 1; unsigned char minuteOfHour : 1; unsigned char secondOfMinute : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long hourOfDay;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) long long millisOfSecond;
@property (nonatomic) BOOL hasMillisOfSecond;
@property (nonatomic) long long minuteOfHour;
@property (nonatomic) BOOL hasMinuteOfHour;
@property (nonatomic) long long secondOfMinute;
@property (nonatomic) BOOL hasSecondOfMinute;
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

@end
