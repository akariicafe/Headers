@class NSRecursiveLock, EAAccessory, EASession;

@interface EAOutputStream : NSOutputStream {
    id _delegate;
    int _sock;
    EAAccessory *_accessory;
    EASession *_session;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    BOOL _useSocket;
    struct __CFSocket { } *_cfSocket;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasSpaceAvailableEventSent;
    BOOL _hasSpaceAvailable;
    BOOL _isAtEndEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFRunLoopSource { } *_socketRunLoopSource;
}

- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)delegate;
- (unsigned long long)streamStatus;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasSpaceAvailable;
- (id)propertyForKey:(id)a0;
- (id)streamError;
- (void)open;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)close;
- (void)_accessoryDidDisconnect:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)_performAtEndOfStreamValidation;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_streamWriteable;
- (void)endStream;
- (id)initWithAccessory:(id)a0 forSession:(id)a1 socket:(int)a2;
- (id)initWithAccessoryWithoutSocket:(id)a0 forSession:(id)a1;
- (void)openCompleted;

@end
