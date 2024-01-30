@class NSRecursiveLock, NSObject, NSCondition, NSMutableData, EAAccessory, EASession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EAInputStream : NSInputStream {
    id _delegate;
    EAAccessory *_accessory;
    EASession *_session;
    int _sock;
    BOOL _useSocket;
    NSMutableData *_inputFromAccData;
    NSCondition *_inputFromAccCondition;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    NSObject<OS_dispatch_queue> *_inputFromAccQueue;
    NSObject<OS_dispatch_source> *_sockListenSource;
    char *_inputFromAccBuffer;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasNewBytesAvailable;
    BOOL _isAtEndEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
}

@property int zeroBytesReadCount;

- (void)_accessoryDidDisconnect:(id)a0;
- (void)close;
- (id)streamError;
- (void)dealloc;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (void)setDelegate:(id)a0;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)delegate;
- (BOOL)hasBytesAvailable;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)openCompleted;
- (void)_performAtEndOfStreamValidation;
- (id)initWithAccessory:(id)a0 forSession:(id)a1 socket:(int)a2;
- (id)initWithAccessoryWithoutSocket:(id)a0 forSession:(id)a1;
- (void)endStream;
- (void)processIncomingAccessoryData:(id)a0;

@end
