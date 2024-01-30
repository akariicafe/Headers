@class NSDictionary, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface SBKStoreClampsController : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *transactionClamps;
@property (nonatomic) double accountIdentifierCheckTimestamp;
@property (nonatomic) double authenticationNeededTimestamp;
@property (nonatomic) double userAcceptedSyncTimestamp;
@property (nonatomic) double networkingBlockedUntil;
@property (nonatomic) double backOffUntil;
@property (nonatomic) double userCancelledSignInBackOffUntil;
@property (nonatomic) double nextUserCancelBackOffInterval;
@property (retain, nonatomic) NSData *pendingUserDefaultArchivedData;

+ (id)sharedClampsController;

- (void)saveToUserDefaults;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)accessTransactionClampsWithBlock:(id /* block */)a0;
- (BOOL)canScheduleTransaction:(id)a0 error:(id *)a1;
- (void)setTimestampForTransaction:(id)a0;
- (void)clearTimestampForTransaction:(id)a0;
- (void)setAccountIdentifierCheckTimestamp;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)setAuthenticationRequest;
- (void)clearAuthenticationRequest;
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)a0 error:(id *)a1;
- (void)setUserAcceptedSyncTimestamp;
- (void)clearUserAcceptedSyncTimestamp;
- (BOOL)hasUserRecentlyAcceptedSync;
- (void)setUserCancelledSignIn;
- (void)clearUserCancelledSignIn;
- (void)backOffForTimeInterval:(double)a0;
- (void)clearBackOff;
- (void)setNetworkingBlocked;
- (void)clearNetworkingBlocked;
- (BOOL)isNetworkingBlocked;
- (double)_rightNow;
- (id)_keyForTransaction:(id)a0;
- (BOOL)_canScheduleTransactionBasedOnType:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)a0 error:(id *)a1;
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)a0 error:(id *)a1;

@end
