@class NSError, CKDLogicalDeviceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CKDAccountDataSecurityObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPErrorForManateeStatus;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void)handleManateeStatusUpdateNotificationWithAvailability:(id)a0;
- (BOOL)isManateeAvailable:(id *)a0;
- (id)initWithDeviceContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)accountSupportsManatee:(id)a0;
- (long long)_fetchManateeAvailability:(id *)a0;
- (void)dealloc;
- (void)manateeStatusForCurrentlyLoggedInAccountWithCompletionHandler:(id /* block */)a0;
- (void)_lockedFetchAndUpdateManateeAvailability;

@end
