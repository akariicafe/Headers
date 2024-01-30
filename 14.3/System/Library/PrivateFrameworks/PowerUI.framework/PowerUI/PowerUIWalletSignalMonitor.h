@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, PowerUISignalMonitorDelegate;

@interface PowerUIWalletSignalMonitor : NSObject <PowerUISignalMonitor>

@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *waitForFinalChangeTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wallet;
+ (id)monitorWithDelegate:(id)a0;

- (void)startMonitoring;
- (void).cxx_destruct;
- (id)requiredFullChargeDate;
- (void)sourceInformationChangedNotification:(id)a0;
- (void)stopMonitoring;
- (unsigned long long)signalID;
- (id)initWithDelegate:(id)a0;

@end
