@class NSObject;
@protocol OS_dispatch_queue;

@interface ANAnnouncementStatePublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (void)_register;
- (BOOL)_setName:(id)a0;
- (void)_publishState:(unsigned long long)a0 name:(id)a1;
- (void)dealloc;
- (BOOL)_setState:(unsigned long long)a0 withToken:(int)a1;
- (id)init;
- (void)_unregister;
- (void)invalidate;
- (void)publishState:(unsigned long long)a0 name:(id)a1;
- (void).cxx_destruct;

@end
