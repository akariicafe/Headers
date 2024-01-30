@class NSMutableSet, NSDate;
@protocol DARefreshManagerDelegate;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate>

@property (retain, nonatomic) NSMutableSet *tokenRegistrations;
@property (nonatomic) int refreshReason;
@property (retain, nonatomic) NSMutableSet *refreshCollections;
@property (nonatomic) long long fetchInterval;
@property (weak, nonatomic) id<DARefreshManagerDelegate> delegate;
@property (nonatomic) int pushState;
@property (retain, nonatomic) NSDate *pushRegistrationTime;
@property (nonatomic) int curStyle;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)_stringForStyle:(int)a0;
- (void)performTokenRegistrationRequestsWithToken:(id)a0 onBehalfOf:(id)a1;
- (void)startFetchActivityForPush;
- (void)startFetchActivityForSystemPCStyle;
- (BOOL)isSetToSystemFetchInterval;
- (void)refreshCollections:(id)a0 withReason:(int)a1;
- (void)stopCollectionsRefresh;
- (void)dailyRefreshActivityFired;
- (void)retryCollections:(id)a0 after:(double)a1 reason:(int)a2;
- (void)tokenRegistrationRequest:(id)a0 finishedWithError:(id)a1;
- (void)cancelFetchActivity;
- (const char *)retryActivityIdentifier;
- (void)cancelRetryActivity;
- (void)cancelDailyRefreshActivity;
- (void)cancelAllTokenRegistrations;
- (const char *)fetchActivityIdentifier;
- (id)_fetchActivityCriteriaWithInterval:(long long)a0;
- (id)_fetchActivityCriteriaInOnPowerMode;
- (long long)XPCActivityIntervalFromSystemSetting;
- (void)startFetchActivityWithInterval:(long long)a0;
- (void)startDailyRefreshActivity;
- (void)_retryActivityFired;

@end
