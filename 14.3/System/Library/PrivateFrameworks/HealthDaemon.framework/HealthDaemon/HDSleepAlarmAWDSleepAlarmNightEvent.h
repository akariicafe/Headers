@class NSString;

@interface HDSleepAlarmAWDSleepAlarmNightEvent : PBCodable <NSCopying> {
    struct { unsigned char bedtimeHour : 1; unsigned char bedtimeMinute : 1; unsigned char bedtimeToCorrectedBedtimeMinutes : 1; unsigned char bedtimeToFirstSleepInterruptionMinutes : 1; unsigned char bedtimeToStartOfLongestSleepIntervalMinutes : 1; unsigned char correctedBedtimeToThirdPartySleepOnsetMinutes : 1; unsigned char percentOfDesiredSleep : 1; unsigned char timestamp : 1; unsigned char wakeupTimeToThirdPartyWakeupTimeMinutes : 1; unsigned char wakeupIsOnWeekday : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasBedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) long long bedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) BOOL hasBedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) long long bedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) BOOL hasBedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) long long bedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) BOOL hasCorrectedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) long long correctedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) BOOL hasWakeupTimeToThirdPartyWakeupTimeMinutes;
@property (nonatomic) long long wakeupTimeToThirdPartyWakeupTimeMinutes;
@property (readonly, nonatomic) BOOL hasThirdPartyBundleIdentifier;
@property (retain, nonatomic) NSString *thirdPartyBundleIdentifier;
@property (nonatomic) BOOL hasPercentOfDesiredSleep;
@property (nonatomic) long long percentOfDesiredSleep;
@property (nonatomic) BOOL hasBedtimeHour;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) BOOL hasBedtimeMinute;
@property (nonatomic) long long bedtimeMinute;
@property (nonatomic) BOOL hasWakeupIsOnWeekday;
@property (nonatomic) BOOL wakeupIsOnWeekday;
@property (readonly, nonatomic) BOOL hasThirdPartyDeviceModel;
@property (retain, nonatomic) NSString *thirdPartyDeviceModel;
@property (readonly, nonatomic) BOOL hasThirdPartyDeviceManufacturer;
@property (retain, nonatomic) NSString *thirdPartyDeviceManufacturer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
