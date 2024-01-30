@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MBCellularDataSubscriptionMonitor : NSObject <CoreTelephonyClientDataDelegate> {
    BOOL _backupOnCellularSupportChanged;
}

@property long long backupOnCellularSupport;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delegateTimer;
@property (retain) CoreTelephonyClient *telephonyClient;
@property (copy, nonatomic) id /* block */ backupOnCellularSupportHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)backupOnCellularSupportWithError:(id *)a0;

- (id)initWithQueue:(id)a0;
- (void)_startDelegateTimer;
- (void)dataSettingsChanged:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)_refreshBackupOnCellularSupport;
- (long long)_backupOnCellularSupportWithError:(id *)a0;
- (void)_cancelDelegateTimer;
- (void)currentDataSimChanged:(id)a0;
- (void)cancel;

@end
