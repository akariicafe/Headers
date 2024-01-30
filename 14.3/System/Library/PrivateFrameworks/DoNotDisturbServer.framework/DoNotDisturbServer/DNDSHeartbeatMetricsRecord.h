@class NSNumber, NSString;

@interface DNDSHeartbeatMetricsRecord : NSObject <DNDSHeartbeatMetricsProtocol>

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL manuallyEnabled;
@property (readonly, copy, nonatomic) NSNumber *numberOfSessions;
@property (readonly, copy, nonatomic) NSNumber *numberOfManualSessions;
@property (readonly, nonatomic) BOOL enabledFromControlCenterPhone;
@property (readonly, nonatomic) BOOL enabledFromControlCenterWatch;
@property (readonly, nonatomic) BOOL enabledForOneHour;
@property (readonly, nonatomic) BOOL enabledUntilEvening;
@property (readonly, nonatomic) BOOL enabledUntilMorning;
@property (readonly, nonatomic) BOOL enabledAtLocation;
@property (readonly, nonatomic) BOOL enabledDuringEvent;
@property (readonly, nonatomic) BOOL enabledDrivingMode;
@property (readonly, nonatomic) BOOL enabledSleepMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)_initWithRecord:(id)a0;
- (id)_initWithEnabled:(BOOL)a0 manuallyEnabled:(BOOL)a1 numberOfSessions:(id)a2 numberOfManualSessions:(id)a3 enabledFromControlCenterPhone:(BOOL)a4 enabledFromControlCenterWatch:(BOOL)a5 enabledForOneHour:(BOOL)a6 enabledUntilEvening:(BOOL)a7 enabledUntilMorning:(BOOL)a8 enabledAtLocation:(BOOL)a9 enabledDuringEvent:(BOOL)a10 enabledDrivingMode:(BOOL)a11 enabledSleepMode:(BOOL)a12;

@end
