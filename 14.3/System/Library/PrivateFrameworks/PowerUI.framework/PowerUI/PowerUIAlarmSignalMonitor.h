@class NSString, MTAlarmManager, NSObject;
@protocol OS_os_log, PowerUISignalMonitorDelegate;

@interface PowerUIAlarmSignalMonitor : NSObject <PowerUISignalMonitor>

@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;

- (void)startMonitoring;
- (id)nextAlarm;
- (void).cxx_destruct;
- (id)requiredFullChargeDate;
- (void)sourceInformationChangedNotification:(id)a0;
- (void)stopMonitoring;
- (unsigned long long)signalID;
- (id)initWithDelegate:(id)a0;
- (id)nextLocalAlarm;

@end
