@class NSUUID, SADevice, TASPAdvertisement, NSDate, NSMutableArray, TALocationLite;
@protocol SAAnalyticsServiceProtocol, SATimeServiceProtocol;

@interface SASingleDeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) SADevice *device;
@property (nonatomic) unsigned long long withYouStatus;
@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned long long notificationState;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, nonatomic) TASPAdvertisement *latestNOAdvertisement;
@property (readonly, nonatomic) TASPAdvertisement *latestWildAdvertisement;
@property (readonly, nonatomic) NSDate *lastWithYouDate;
@property (readonly, nonatomic) NSDate *lastCompanionDisconnectionDate;
@property (readonly, nonatomic) unsigned long long currentScenarioClass;
@property (nonatomic) unsigned long long currentMonitoringSessionState;
@property (readonly, nonatomic) unsigned long long monitoringSessionStateAtTimeOfFirstAdv;
@property (retain, nonatomic) NSMutableArray *uuidsOfRelatedDevices;
@property (nonatomic) BOOL hasSurfacedNotification;
@property (readonly) BOOL isConnected;
@property (readonly, nonatomic) NSDate *firstAdvertisementAfterScenarioTransition;
@property (readonly, nonatomic) NSDate *currentScenarioTime;
@property (copy, nonatomic) TALocationLite *lastWithYouLocation;
@property (retain, nonatomic) id<SAAnalyticsServiceProtocol> analytics;
@property (retain, nonatomic) id<SATimeServiceProtocol> clock;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 clock:(id)a1 analytics:(id)a2;
- (id)initWithConnectionEvent:(id)a0 clock:(id)a1 analytics:(id)a2;
- (void)insertRelatedDevice:(id)a0;
- (void)publishAnalyticsForFirstAdv:(id)a0 scenario:(unsigned long long)a1;
- (void)resetRelatedDevices;
- (void)updateCurrentScenarioClass:(unsigned long long)a0;
- (void)updateFirstAdvertisementAfterScenarioTransition:(id)a0;
- (void)updateLastCompanionDisconnectionDate:(id)a0;
- (void)updateLastWithYouDate:(id)a0;
- (void)updateLatestAdvertisement:(id)a0;
- (void)updateWithYouStatus:(unsigned long long)a0;

@end
