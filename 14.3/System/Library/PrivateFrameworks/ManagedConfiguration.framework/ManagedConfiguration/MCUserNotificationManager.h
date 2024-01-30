@interface MCUserNotificationManager : NSObject

@property (readonly, nonatomic) BOOL hasOutstandingNotifications;

+ (id)sharedManager;

- (void)displayUserNotificationWithTitle:(id)a0 message:(id)a1 defaultButtonText:(id)a2 alternateButtonText:(id)a3 otherButtonText:(id)a4 displayOnLockScreen:(BOOL)a5 dismissOnLock:(BOOL)a6 displayInAppWhitelistModes:(BOOL)a7 dismissAfterTimeInterval:(double)a8 assertion:(id)a9 completionBlock:(id /* block */)a10;
- (void)displayUserNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButtonText:(id)a3 alternateButtonText:(id)a4 otherButtonText:(id)a5 displayOnLockScreen:(BOOL)a6 dismissOnLock:(BOOL)a7 displayInAppWhitelistModes:(BOOL)a8 dismissAfterTimeInterval:(double)a9 assertion:(id)a10 completionBlock:(id /* block */)a11;
- (id)init;
- (void)dealloc;
- (BOOL)displayQueueProfileAlertForError:(id)a0 targetDevice:(unsigned long long)a1;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)cancelAllNotificationsCompletionBlock:(id /* block */)a0;
- (id)_purgatoryMessageForDevice:(unsigned long long)a0;
- (void)_updateTitle:(id *)a0 andMessage:(id *)a1 withTargetFailureInfoForDevice:(unsigned long long)a2 fromError:(id)a3;
- (void)cancelNotificationEntriesMatchingPredicate:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)_invalidTargetMessageForDevice:(unsigned long long)a0;
- (void)_updateTitle:(id *)a0 andMessage:(id *)a1 withUnavailableTargetInfoForDevice:(unsigned long long)a2;
- (void)promptUserToLogIntoiTunesWithTitle:(id)a0 message:(id)a1 assertion:(id)a2 completionBlock:(id /* block */)a3;
- (void)inviteUserToVPPWithTitle:(id)a0 message:(id)a1 assertion:(id)a2 completionBlock:(id /* block */)a3;
- (void)cancelNotificationsWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;

@end
