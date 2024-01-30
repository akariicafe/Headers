@class PowerUISmartChargeManager, _CDContextualChangeRegistration, PowerUILocationSignalMonitor, NSObject;
@protocol OS_os_log, OS_dispatch_queue, _CDContext;

@interface PowerUIRemoteLocationMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PowerUISmartChargeManager *manager;
@property (retain, nonatomic) PowerUILocationSignalMonitor *locationManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) unsigned long long syncing;
@property (retain, nonatomic) id<_CDContext> context;
@property (retain, nonatomic) _CDContextualChangeRegistration *wakingRegistration;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 withLocationManager:(id)a1 withContext:(id)a2 withDefaultsDomain:(id)a3 withTrialManager:(id)a4;

@end
