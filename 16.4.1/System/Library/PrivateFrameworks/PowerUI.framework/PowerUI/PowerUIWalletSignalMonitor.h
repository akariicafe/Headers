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

- (id)requiredFullChargeDate;
- (void)startMonitoring;
- (id)detectedSignals;
- (id)initWithDelegate:(id)a0;
- (void)sourceInformationChangedNotification:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)signalID;
- (void)stopMonitoring;

@end
