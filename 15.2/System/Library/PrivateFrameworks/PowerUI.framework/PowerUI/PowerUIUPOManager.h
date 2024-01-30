@class UNUserNotificationCenter, NSBundle, NSDate, NSObject, NSUserDefaults;
@protocol OS_os_log, _CDContext, OS_dispatch_queue;

@interface PowerUIUPOManager : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (nonatomic) BOOL dataProviderLoaded;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) id<_CDContext> contextStore;
@property (nonatomic) int unlockToken;
@property (nonatomic) int mitigationsDisabledToken;
@property (retain, nonatomic) NSDate *lastTimeLocked;
@property (retain) NSDate *upoTime;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockNotificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationResponseQueue;

+ (id)sharedInstance;

- (void)dataProviderDidLoad;
- (id)sortDescriptors;
- (void)displayMitigationsEnabledNotification;
- (void)clearMitigationsEnabledNotificationRequestIfNecessary;
- (void)removeMitigationsEnabledNotification;
- (void).cxx_destruct;
- (void)requestBulletin;
- (id)init;
- (id)mitigationsEnabledNotificationRequest;
- (void)registerForWithdrawalNotifications;
- (void)displayBatteryServiceNotification;

@end
