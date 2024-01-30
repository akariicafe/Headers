@class _CDContextualChangeRegistration, NSString, NSObject;
@protocol OS_os_log, _CDContext, PowerUISignalMonitorDelegate;

@interface PowerUIWakeRequestSignalMonitor : NSObject <PowerUISignalMonitor>

@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDContext> context;
@property (retain, nonatomic) _CDContextualChangeRegistration *registration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;

- (id)initWithDelegate:(id)a0;
- (unsigned long long)signalID;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (id)requiredFullChargeDate;
- (id)nextUserVisibleWakeDate;

@end
