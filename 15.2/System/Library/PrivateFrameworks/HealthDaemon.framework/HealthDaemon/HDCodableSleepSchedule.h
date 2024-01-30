@class NSString, HDCodableSample;

@interface HDCodableSleepSchedule : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char bedHour : 1; unsigned char bedMinute : 1; unsigned char overrideDayIndex : 1; unsigned char wakeHour : 1; unsigned char wakeMinute : 1; unsigned char friday : 1; unsigned char monday : 1; unsigned char saturday : 1; unsigned char sunday : 1; unsigned char thursday : 1; unsigned char tuesday : 1; unsigned char wednesday : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasMonday;
@property (nonatomic) BOOL monday;
@property (nonatomic) BOOL hasTuesday;
@property (nonatomic) BOOL tuesday;
@property (nonatomic) BOOL hasWednesday;
@property (nonatomic) BOOL wednesday;
@property (nonatomic) BOOL hasThursday;
@property (nonatomic) BOOL thursday;
@property (nonatomic) BOOL hasFriday;
@property (nonatomic) BOOL friday;
@property (nonatomic) BOOL hasSaturday;
@property (nonatomic) BOOL saturday;
@property (nonatomic) BOOL hasSunday;
@property (nonatomic) BOOL sunday;
@property (nonatomic) BOOL hasWakeHour;
@property (nonatomic) long long wakeHour;
@property (nonatomic) BOOL hasWakeMinute;
@property (nonatomic) long long wakeMinute;
@property (nonatomic) BOOL hasBedHour;
@property (nonatomic) long long bedHour;
@property (nonatomic) BOOL hasBedMinute;
@property (nonatomic) long long bedMinute;
@property (nonatomic) BOOL hasOverrideDayIndex;
@property (nonatomic) long long overrideDayIndex;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end
