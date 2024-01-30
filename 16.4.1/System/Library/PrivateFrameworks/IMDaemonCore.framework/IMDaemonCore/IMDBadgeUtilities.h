@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject

@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) long long lastFailedMessageDate;
@property (nonatomic, getter=isShowingFailure) BOOL showingFailure;
@property (nonatomic, getter=isUnexpectedlyLoggedOut) BOOL unexpectedlyLoggedOut;
@property (nonatomic) BOOL addedObserverForUnexpectedlyLoggedOut;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance;

+ (id)sharedInstance;
+ (BOOL)_isUsableSendingForAccount:(id)a0;
+ (id)_accountsArrayForServiceIMessage;
+ (BOOL)_isUserIntentNotLoggedOut;
+ (BOOL)_iMessageEnabled;
+ (BOOL)_isTryingToLogin;
+ (BOOL)_iMessageFailedAccountIsIrreparable;

- (void)_updateBadge;
- (void)_clearFailureBadge;
- (void)_saveFailureDate:(long long)a0;
- (void)_checkIfUnexpectedlyLoggedOut;
- (long long)_savedFailureDate;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (void)_postBadgeNumber:(id)a0;
- (void)_stopSuppressingSound;
- (BOOL)_shouldShowFailureString;
- (void)dealloc;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)a0;
- (id)initWithMessageStore:(id)a0;
- (void)_compareLastFailureDateAndUpdateBadge:(long long)a0;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (id)init;
- (void)_handleUnexpectedLogout;
- (BOOL)isInAppleStoreDemoMode;
- (BOOL)_isUnexpectedlyLogOutValue;
- (void)_cacheFailureDate:(long long)a0;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (void).cxx_destruct;
- (void)_postBadgeString:(id)a0;

@end
