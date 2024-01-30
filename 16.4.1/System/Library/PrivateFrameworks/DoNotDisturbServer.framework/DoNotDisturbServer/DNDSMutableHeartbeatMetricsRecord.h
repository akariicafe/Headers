@class NSNumber, NSString;

@interface DNDSMutableHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord <DNDSMutableHeartbeatMetricsProtocol>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL manuallyEnabled;
@property (copy, nonatomic) NSNumber *numberOfSessions;
@property (copy, nonatomic) NSNumber *numberOfManualSessions;
@property (nonatomic) BOOL enabledFromControlCenterPhone;
@property (nonatomic) BOOL enabledFromControlCenterWatch;
@property (nonatomic) BOOL enabledForOneHour;
@property (nonatomic) BOOL enabledUntilEvening;
@property (nonatomic) BOOL enabledUntilMorning;
@property (nonatomic) BOOL enabledAtLocation;
@property (nonatomic) BOOL enabledDuringEvent;
@property (nonatomic) BOOL enabledDrivingMode;
@property (nonatomic) BOOL enabledSleepMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setNumberOfSessions:(id)a0;
- (void)setEnabledAtLocation:(BOOL)a0;
- (void)setEnabledDrivingMode:(BOOL)a0;
- (void)setEnabledDuringEvent:(BOOL)a0;
- (void)setEnabledForOneHour:(BOOL)a0;
- (void)setEnabledFromControlCenterPhone:(BOOL)a0;
- (void)setEnabledFromControlCenterWatch:(BOOL)a0;
- (void)setEnabledSleepMode:(BOOL)a0;
- (void)setEnabledUntilEvening:(BOOL)a0;
- (void)setEnabledUntilMorning:(BOOL)a0;
- (void)setManuallyEnabled:(BOOL)a0;
- (void)setNumberOfManualSessions:(id)a0;

@end
