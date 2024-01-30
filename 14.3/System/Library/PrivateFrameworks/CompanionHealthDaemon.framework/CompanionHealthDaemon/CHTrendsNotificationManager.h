@class UNUserNotificationCenter, NSString, HDProfile, HDActivitySummaryBuilder, HDKeyValueDomain;

@interface CHTrendsNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain;
@property (retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder;
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)protectedDataBecameAvailable;
- (void)daemonReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)notificationDidSendSuccessfully;
- (void)sendNotificationIfAllowed;
- (long long)notificationDelayNumberOfMinutes;
- (void)sendNotificationWithCompletion:(id /* block */)a0;

@end
