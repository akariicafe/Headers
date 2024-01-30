@class UNUserNotificationCenter, NSString, HDProfile, HDActivitySummaryBuilder, HDKeyValueDomain;

@interface CHTrendsNotificationManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain;
@property (retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder;
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithProfile:(id)a0;
- (long long)notificationDelayNumberOfMinutes;
- (void)protectedDataBecameAvailable;
- (void)notificationDidSendSuccessfully;
- (void)sendNotificationWithCompletion:(id /* block */)a0;
- (void)sendNotificationIfAllowed;
- (void).cxx_destruct;

@end
