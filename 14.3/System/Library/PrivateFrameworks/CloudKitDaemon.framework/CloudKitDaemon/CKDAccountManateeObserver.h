@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface CKDAccountManateeObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPError;

+ (id)sharedObserver;

- (void)_lockedFetchAndUpdateManateeAvailability;
- (id)init;
- (void).cxx_destruct;
- (void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)dealloc;
- (BOOL)isManateeAvailable:(id *)a0;
- (BOOL)accountSupportsManatee:(id)a0;
- (void)handleUpdateNotificationWithAvailability:(id)a0;

@end
