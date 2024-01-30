@class NSLock;
@protocol SCROServerDelegate;

@interface SCROServer : NSObject {
    NSLock *_contentLock;
    id<SCROServerDelegate> _delegate;
    struct __CFRunLoopSource { } *_serverSource;
    struct __CFRunLoopSource { } *_deathSource;
    struct __CFRunLoopTimer { } *_deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    long long _clientCount;
    BOOL _isRegisteredWithMach;
}

@property (class, readonly) SCROServer *sharedServer;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (long long)_clientCount;
- (struct __CFRunLoopSource { } *)serverSource;
- (struct __CFRunLoopTimer { } *)_deathTimer;
- (BOOL)_registerWithMachServiceName:(char *)a0;
- (void)unregisterWithMach;
- (long long)_incrementClientCount;
- (void)_setClientCount:(long long)a0;
- (int)_registerForNotificationOnDeathPort:(unsigned int)a0;
- (BOOL)isRegisteredWithMach;
- (BOOL)registerWithMach;

@end
