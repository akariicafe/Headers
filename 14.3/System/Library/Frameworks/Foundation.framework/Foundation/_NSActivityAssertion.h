@class NSString, BKSProcessAssertion, NSObject;
@protocol OS_os_transaction, OS_voucher, NSObject;

@interface _NSActivityAssertion : NSObject {
    unsigned long long _options;
    NSString *_reason;
    NSObject<OS_os_transaction> *_transaction;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
    id<NSObject> _xpcBoost;
    BKSProcessAssertion *_processAssertion;
    id /* block */ _expirationHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _ended;
    unsigned char _adoptPreviousVoucher;
}

+ (id)_expirationHandlerExecutionQueue;
+ (void)_expireAllActivies;
+ (void)_performActivityWithOptions:(unsigned long long)a0 reason:(id)a1 usingBlock:(id /* block */)a2;
+ (id)_expiringTaskExecutionQueue;
+ (id)_expiringAssertionManagementQueue;
+ (id)_expiringActivities;
+ (void)_performExpiringActivityWithReason:(id)a0 usingBlock:(id /* block */)a1;
+ (void)_dumpExpiringActivitives;

- (void)_end;
- (void)_fireExpirationHandler;
- (void)dealloc;
- (id)_initWithActivityOptions:(unsigned long long)a0 reason:(id)a1 expirationHandler:(id /* block */)a2;
- (void)_reactivate;
- (id)debugDescription;

@end
