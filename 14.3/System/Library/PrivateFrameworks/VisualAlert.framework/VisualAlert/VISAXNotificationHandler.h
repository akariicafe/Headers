@class NSString;

@interface VISAXNotificationHandler : NSObject {
    id /* block */ _dispatcher;
    unsigned long long _observerIdentifier;
}

@property (retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName;
@property (retain, nonatomic, setter=_setTarget:) id _target;
@property (copy, nonatomic, setter=_setDispatcher:) id /* block */ _dispatcher;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (unsigned long long)_safelyRegisterObserver:(id)a0;
+ (void)_safelyRemoveObserverForIdentifier:(unsigned long long)a0;
+ (id)_safelyGetObserverForIdentifier:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_startObserving;
- (id)description;
- (void)_stopObserving;
- (void)invalidate;
- (id)initWithNotificationName:(id)a0 target:(id)a1 dispatcher:(id /* block */)a2;
- (id)initWithNotificationName:(id)a0 target:(id)a1 handler:(SEL)a2;
- (void)processHandler:(SEL)a0;
- (id)initWithNotificationName:(id)a0 target:(id)a1 dispatcher:(id /* block */)a2 startObserving:(BOOL)a3;
- (id)_notificationTypeDescription;
- (void)_handleNotificationWithName:(id)a0 object:(const void *)a1 userInfo:(id)a2;

@end
