@class NSObject;
@protocol OS_dispatch_queue;

@interface ANAnnouncementStatePublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)_register;
- (void)_unregister;
- (BOOL)_setState:(unsigned long long)a0 withToken:(int)a1;
- (void)invalidate;
- (void)publishAnnouncePlaybackState:(unsigned long long)a0;

@end
