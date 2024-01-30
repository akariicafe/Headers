@class _INPBDateTimeRangeValue, NSString, NSArray, _INPBLocation;

@interface _INPBCalendarEvent : PBCodable <_INPBCalendarEvent, NSSecureCoding, NSCopying> {
    struct { unsigned char isContactBirthday : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *calendarPunchoutURI;
@property (readonly, nonatomic) BOOL hasCalendarPunchoutURI;
@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (copy, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) BOOL hasEventIdentifier;
@property (nonatomic) BOOL isContactBirthday;
@property (nonatomic) BOOL hasIsContactBirthday;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)participantsType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearParticipants;
- (void)addParticipants:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)participantsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
