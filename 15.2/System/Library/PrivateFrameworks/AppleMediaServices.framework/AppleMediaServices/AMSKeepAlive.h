@class NSString, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long style;

+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (id)keepAliveWithName:(id)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)_accessAssertionCache:(id /* block */)a0;
+ (void)_handleAssertionExpiration;
+ (id)keepAliveWithFormat:(id)a0;

- (id)_cacheKey;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)_takeOSTransaction;
- (void)_removeProcessAssertion;
- (void)invalidate;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void)dealloc;
- (id)_assertionName;
- (void)_startLogTimer;
- (void)_takeProcessAssertion;
- (void)_removeOSTransaction;

@end
