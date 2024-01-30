@class NSString, SUKeybagInterface, BSTimer;

@interface SUInstallationConstraintMonitorForBatteryDiskAndKeybag : SUInstallationConstraintMonitorBase <SUKeybagInterfaceObserver> {
    SUKeybagInterface *_queue_keybag;
    BSTimer *_queue_timer;
    unsigned long long _queue_deltaSpaceNeeded;
    BOOL _queue_diskSatisfied;
    BOOL _queue_keybagSatisfied;
    BOOL _queue_passcodeSatisfied;
    BOOL _queue_batterySatisfied;
}

@property (readonly, nonatomic) unsigned long long deltaSpaceNeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)_queue_evaluateBattery;
- (BOOL)_queue_evaluateDisk;
- (BOOL)_queue_evaluateKeybag;
- (BOOL)_queue_evaluatePasscodeLocked;
- (void)_queue_pollSatisfied;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (id)initOnQueue:(id)a0 withDownload:(id)a1 pollDuration:(double)a2 keybag:(id)a3;
- (void)keybagInterface:(id)a0 hasPasscodeSetDidChange:(BOOL)a1;
- (void)keybagInterface:(id)a0 passcodeLockedStateDidChange:(BOOL)a1;
- (void)refreshConstraints;
- (unsigned long long)unsatisfiedConstraints;

@end
