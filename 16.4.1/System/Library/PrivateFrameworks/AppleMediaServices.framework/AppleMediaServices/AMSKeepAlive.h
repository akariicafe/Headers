@class NSString, AMSRBSKeepAlive, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    AMSRBSKeepAlive *_rbsKeepAlive;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long style;

+ (BOOL)_isRBSAssertionsEnabled;
+ (id)keepAliveWithName:(id)a0;
+ (id)keepAliveWithFormat:(id)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)rbs_keepAliveWithName:(id)a0;
+ (void)_handleAssertionExpiration;
+ (id)rbs_keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)_accessAssertionCache:(id /* block */)a0;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;

- (id)initWithName:(id)a0;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_takeOSTransaction;
- (id)_cacheKey;
- (id)initRBSWithName:(id)a0 style:(long long)a1;
- (void)rbs_invalidate;
- (void)dealloc;
- (id)_assertionName;
- (id)initRBSWithName:(id)a0;
- (void)_takeProcessAssertion;
- (void)_startLogTimer;
- (void)invalidate;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void).cxx_destruct;

@end
