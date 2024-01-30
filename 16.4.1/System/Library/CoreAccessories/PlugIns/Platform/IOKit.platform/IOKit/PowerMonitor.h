@class NSLock, NSMutableArray, NSObject;
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
@property (retain, nonatomic) NSLock *batteryNotificationClientsLock;
@property (nonatomic) int batteryChargingType;
@property (nonatomic) int batteryChargingTypeExternal;

+ (id)sharedMonitor;

- (void)_checkAndSendNotificationForOldConnected:(BOOL)a0 oldIsBatteryCharging:(BOOL)a1 oldBatteryChargeLevelPercent:(int)a2 oldBatteryChargingType:(int)a3 oldBatteryChargingTypeExt:(int)a4 overrideChanged:(BOOL)a5;
- (void)destroySleepNotificationsForClient:(id)a0;
- (BOOL)_getBatteryChargingTypeIsInductive:(int)a0;
- (id)createBatteryNotificationClient;
- (void)destroyBatteryNotificationsForClient:(id)a0;
- (BOOL)isExternalChargerConnected;
- (unsigned char)getBatteryChargeLevel;
- (int)getExternalBatteryChargingType;
- (void)clientHandledSleepNotification:(id)a0;
- (void)dealloc;
- (BOOL)getBatteryChargingTypeIsInductive;
- (id)init;
- (int)getBatteryChargingType;
- (void).cxx_destruct;
- (int)getBatteryChargingState;
- (id)createSleepNotificationClient;
- (BOOL)getExternalBatteryChargingTypeIsInductive;

@end
