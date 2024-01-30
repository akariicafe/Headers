@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AFNotifyStatePublisher : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_register;
- (void)_unregister;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)publishState:(unsigned long long)a0;
- (void)invalidate;
- (void)dealloc;
- (BOOL)_setState:(unsigned long long)a0 withToken:(int)a1;
- (BOOL)_getState:(unsigned long long *)a0 withToken:(int)a1;
- (void)publishStateWithBlock:(id /* block */)a0;

@end
