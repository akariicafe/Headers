@class NSString;

@interface _INPBRecurrenceValue : PBCodable <_INPBRecurrenceValue, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _weeklyRecurrenceDays;
    struct { unsigned char frequency : 1; unsigned char interval : 1; unsigned char ordinal : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int frequency;
@property (nonatomic) BOOL hasFrequency;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) long long ordinal;
@property (nonatomic) BOOL hasOrdinal;
@property (readonly, nonatomic) int *weeklyRecurrenceDays;
@property (readonly, nonatomic) unsigned long long weeklyRecurrenceDaysCount;
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
- (int)StringAsFrequency:(id)a0;
- (int)StringAsWeeklyRecurrenceDays:(id)a0;
- (void)addWeeklyRecurrenceDays:(int)a0;
- (void)clearWeeklyRecurrenceDays;
- (id)frequencyAsString:(int)a0;
- (void)setWeeklyRecurrenceDays:(int *)a0 count:(unsigned long long)a1;
- (id)weeklyRecurrenceDaysAsString:(int)a0;
- (int)weeklyRecurrenceDaysAtIndex:(unsigned long long)a0;

@end
