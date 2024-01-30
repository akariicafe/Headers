@class NSDictionary, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface SBKStoreClampsController : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSDictionary *transactionClamps;
@property double accountIdentifierCheckTimestamp;
@property double authenticationNeededTimestamp;
@property double userAcceptedSyncTimestamp;
@property double networkingBlockedUntil;
@property double backOffUntil;
@property double userCancelledSignInBackOffUntil;
@property double nextUserCancelBackOffInterval;
@property (retain) NSData *pendingUserDefaultArchivedData;

+ (id)sharedClampsController;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)saveToUserDefaults;
- (void)encodeWithCoder:(id)a0;
- (void)accessTransactionClampsWithBlock:(id /* block */)a0;
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnType:(id)a0 error:(id *)a1;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)clearAuthenticationRequest;
- (void)clearBackOff;
- (void)clearNetworkingBlocked;
- (void)clearUserAcceptedSyncTimestamp;
- (void)clearUserCancelledSignIn;
- (id)_keyForTransaction:(id)a0;
- (double)_rightNow;
- (void)clearTimestampForTransaction:(id)a0;
- (BOOL)isNetworkingBlocked;
- (BOOL)canScheduleTransaction:(id)a0 error:(id *)a1;
- (void)setTimestampForTransaction:(id)a0;
- (void)setAccountIdentifierCheckTimestamp;
- (void)setAuthenticationRequest;
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)a0 error:(id *)a1;
- (void)setUserAcceptedSyncTimestamp;
- (BOOL)hasUserRecentlyAcceptedSync;
- (void)setUserCancelledSignIn;
- (void)backOffForTimeInterval:(double)a0;
- (void)setNetworkingBlocked;

@end
