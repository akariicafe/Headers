@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject {
    unsigned long long _unreadCount;
    long long _lastFailedMessageDate;
    BOOL _showingFailure;
    BOOL _isUnexpectedlyLogOut;
    BOOL _addedObserverForUnexpectedlyLoggedOut;
}

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance;

+ (id)sharedInstance;
+ (id)_accountsArrayForServiceIMessage;
+ (BOOL)_isTryingToLogin;
+ (BOOL)_isUserIntentNotLoggedOut;
+ (BOOL)_isUsableSendingForAccount:(id)a0;
+ (BOOL)_iMessageEnabled;
+ (BOOL)_iMessageFailedAccountIsIrreparable;

- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (id)init;
- (void)_clearFailureBadge;
- (void)_updateBadge;
- (BOOL)_shouldShowFailureString;
- (BOOL)_isUnexpectedlyLogOutValue;
- (void)dealloc;
- (void)_postBadgeNumber:(id)a0;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)a0;
- (id)initWithMessageStore:(id)a0;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (void)_postBadgeString:(id)a0;
- (void)_compareLastFailureDateAndUpdateBadge:(long long)a0;
- (void)_cacheFailureDate:(long long)a0;
- (void)_stopSuppressingSound;
- (void)_checkIfUnexpectedlyLoggedOut;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (void)_handleUnexpectedLogout;
- (void)_saveFailureDate:(long long)a0;
- (BOOL)isInAppleStoreDemoMode;
- (BOOL)_isUnexpectedlyLoggedOut;
- (long long)_savedFailureDate;

@end
