@class PRXAction, CUSystemMonitor, UIImageView, NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSPRXDeviceUnlockViewController : PRXCardContentViewController <TSSetupFlowItem> {
    int springBoardLockStateNotifyToken;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain) PRXAction *action;
@property (retain) UIImageView *radioImageView;
@property (retain) CUSystemMonitor *systemMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)_handleLockState:(int)a0;
- (void)_registerLockState;
- (void)_screenStateChanged;
- (void)_startSystemMonitor;
- (void)_stopSystemMonitor;
- (void)_unlockScreen;
- (void)_unregisterLockState;

@end
