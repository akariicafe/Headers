@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PowerMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *systemPowerQueue;
@property (nonatomic) unsigned int systemPowerPort;
@property (nonatomic) struct IONotificationPort { } *systemPowerNotifyPortRef;
@property (nonatomic) unsigned int systemPowerIterator;
@property (nonatomic) BOOL sleepNotificationsEnabled;
@property (retain, nonatomic) NSMutableArray *sleepNotificationClients;
@property (retain, nonatomic) NSMutableArray *clientsPreventingSleep;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sleepSemaphore;
@property (nonatomic) BOOL systemIsAsleep;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientsPreventingSleepLock;
@property (nonatomic) BOOL isExtChargerConnected;
@property (nonatomic) int batteryCapacity;
@property (nonatomic) int batteryCapacityOverride;
@property (nonatomic) int batteryCapacityMax;
@property (nonatomic) BOOL isBatteryCharging;
@property (nonatomic) unsigned char batteryChargeLevelPercent;
@property (nonatomic) struct IONotificationPort { } *batteryNotifyPortRef;
@property (nonatomic) unsigned int battery_iter;
@property (retain, nonatomic) NSMutableArray *batteryNotificationClients;
@property (nonatomic) int batteryChargingType;
@property (nonatomic) int batteryChargingTypeExternal;

+ (id)sharedMonitor;

- (void)destroySleepNotificationsForClient:(id)a0;
- (id)createSleepNotificationClient;
- (BOOL)getBatteryChargingTypeIsInductive;
- (BOOL)isExternalChargerConnected;
- (void)clientHandledSleepNotification:(id)a0;
- (int)getBatteryChargingType;
- (void)_checkAndSendNotificationForOldConnected:(BOOL)a0 oldIsBatteryCharging:(BOOL)a1 oldBatteryChargeLevelPercent:(int)a2 oldBatteryChargingType:(int)a3 oldBatteryChargingTypeExt:(int)a4 overrideChanged:(BOOL)a5;
- (void)destroyBatteryNotificationsForClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_getBatteryChargingTypeIsInductive:(int)a0;
- (BOOL)getExternalBatteryChargingTypeIsInductive;
- (id)createBatteryNotificationClient;
- (int)getExternalBatteryChargingType;
- (unsigned char)getBatteryChargeLevel;
- (void)dealloc;
- (int)getBatteryChargingState;

@end
