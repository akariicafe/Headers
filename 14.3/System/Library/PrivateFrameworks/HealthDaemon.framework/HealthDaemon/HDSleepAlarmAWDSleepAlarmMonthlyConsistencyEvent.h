@class NSString, HDSleepAlarmAWDSleepAlarmStatistics;

@interface HDSleepAlarmAWDSleepAlarmMonthlyConsistencyEvent : PBCodable <NSCopying> {
    struct { unsigned char bedtimeAlarmNightCount : 1; unsigned char bedtimeChangesCount : 1; unsigned char thirdPartySleepTrackerNightCount : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasBedtimeAlarmNightCount;
@property (nonatomic) long long bedtimeAlarmNightCount;
@property (nonatomic) BOOL hasBedtimeChangesCount;
@property (nonatomic) long long bedtimeChangesCount;
@property (nonatomic) BOOL hasThirdPartySleepTrackerNightCount;
@property (nonatomic) long long thirdPartySleepTrackerNightCount;
@property (readonly, nonatomic) BOOL hasThirdPartyBundleIdentifier;
@property (retain, nonatomic) NSString *thirdPartyBundleIdentifier;
@property (readonly, nonatomic) BOOL hasBedtimeCorrectionMinutesStatistics;
@property (retain, nonatomic) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeCorrectionMinutesStatistics;
@property (readonly, nonatomic) BOOL hasBedtimeChangesMinutesStatistics;
@property (retain, nonatomic) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeChangesMinutesStatistics;
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
