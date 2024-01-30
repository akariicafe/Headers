@interface MCUserNotificationManager : NSObject

@property (readonly, nonatomic) BOOL hasOutstandingNotifications;

+ (id)sharedManager;

- (void)displayUserNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButtonText:(id)a3 alternateButtonText:(id)a4 otherButtonText:(id)a5 textfieldPlaceholder:(id)a6 displayOnLockScreen:(BOOL)a7 dismissOnLock:(BOOL)a8 displayInAppWhitelistModes:(BOOL)a9 dismissAfterTimeInterval:(double)a10 assertion:(id)a11 completionBlock:(id /* block */)a12;
- (id)init;
- (id)displayQueueProfileError:(id)a0 targetDevice:(unsigned long long)a1;
- (void)dealloc;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (id)_purgatoryMessageForDevice:(unsigned long long)a0;
- (void)cancelAllNotificationsCompletionBlock:(id /* block */)a0;
- (void)cancelNotificationEntriesMatchingPredicate:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)_updateTitle:(id *)a0 andMessage:(id *)a1 withTargetFailureInfoForDevice:(unsigned long long)a2 fromError:(id)a3;
- (id)_invalidTargetMessageForDevice:(unsigned long long)a0;
- (void)_updateTitle:(id *)a0 andMessage:(id *)a1 withUnavailableTargetInfoForDevice:(unsigned long long)a2;
- (void)promptUserToLogIntoiTunesWithTitle:(id)a0 message:(id)a1 assertion:(id)a2 completionBlock:(id /* block */)a3;
- (void)inviteUserToVPPWithTitle:(id)a0 message:(id)a1 assertion:(id)a2 completionBlock:(id /* block */)a3;
- (void)cancelNotificationsWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;

@end
