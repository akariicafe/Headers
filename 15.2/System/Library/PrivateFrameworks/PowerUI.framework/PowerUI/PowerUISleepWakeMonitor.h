@class PowerUISmartChargeManager, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_os_log, _CDUserContext;

@interface PowerUISleepWakeMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDUserContext> context;
@property (retain, nonatomic) PowerUISmartChargeManager *manager;
@property (retain, nonatomic) NSDate *desktopTransitionEvaluationDate;
@property (nonatomic) unsigned long long checkpoint;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 withCheckpoint:(unsigned long long)a1 withLastDesktopCheck:(id)a2;

@end
