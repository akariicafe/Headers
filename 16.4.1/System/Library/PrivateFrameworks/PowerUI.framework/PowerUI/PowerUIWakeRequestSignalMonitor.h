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

- (id)requiredFullChargeDate;
- (void)startMonitoring;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)signalID;
- (void)stopMonitoring;
- (id)nextUserVisibleWakeDate;

@end
