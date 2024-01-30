@class NSNumber;

@interface DNDSDailyHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord

@property (readonly, copy, nonatomic) NSNumber *dayOfWeek;

+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)_initWithRecord:(id)a0;
- (id)_initWithEnabled:(BOOL)a0 manuallyEnabled:(BOOL)a1 numberOfSessions:(id)a2 numberOfManualSessions:(id)a3 enabledFromControlCenterPhone:(BOOL)a4 enabledFromControlCenterWatch:(BOOL)a5 enabledForOneHour:(BOOL)a6 enabledUntilEvening:(BOOL)a7 enabledUntilMorning:(BOOL)a8 enabledAtLocation:(BOOL)a9 enabledDuringEvent:(BOOL)a10 enabledDrivingMode:(BOOL)a11 enabledSleepMode:(BOOL)a12 dayOfWeek:(id)a13;

@end
