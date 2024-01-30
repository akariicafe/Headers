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
+ (BOOL)_iMessageFailedAccountIsIrreparable;
+ (BOOL)_isTryingToLogin;
+ (BOOL)_isUserIntentNotLoggedOut;
+ (BOOL)_isUsableSendingForAccount:(id)a0;
+ (id)_accountsArrayForServiceIMessage;
+ (BOOL)_iMessageEnabled;

- (void)_compareLastFailureDateAndUpdateBadge:(long long)a0;
- (void)_cacheFailureDate:(long long)a0;
- (BOOL)_shouldShowFailureString;
- (void)_checkIfUnexpectedlyLoggedOut;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (void)_postBadgeString:(id)a0;
- (void)_stopSuppressingSound;
- (void)_updateBadge;
- (BOOL)isInAppleStoreDemoMode;
- (void)_postBadgeNumber:(id)a0;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (void)_handleUnexpectedLogout;
- (void)_saveFailureDate:(long long)a0;
- (BOOL)_isUnexpectedlyLogOutValue;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (id)init;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)a0;
- (long long)_savedFailureDate;
- (void)_clearFailureBadge;
- (void)dealloc;
- (BOOL)_isUnexpectedlyLoggedOut;
- (id)initWithMessageStore:(id)a0;

@end
