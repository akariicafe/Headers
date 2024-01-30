@class NSString, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long style;

+ (void)_handleAssertionExpiration;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)keepAliveWithName:(id)a0;
+ (void)_accessAssertionCache:(id /* block */)a0;
+ (id)keepAliveWithFormat:(id)a0;

- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (void).cxx_destruct;
- (void)_removeOSTransaction;
- (void)dealloc;
- (id)_cacheKey;
- (id)_assertionName;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void)_startLogTimer;
- (void)invalidate;
- (void)_removeProcessAssertion;

@end
