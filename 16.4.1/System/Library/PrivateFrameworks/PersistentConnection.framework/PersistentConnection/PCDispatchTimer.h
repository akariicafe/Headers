@class NSObject, CUTWeakReference, NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PCDispatchTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    BOOL _isValid;
}

@property (readonly, nonatomic) BOOL isValid;
@property (retain, nonatomic) NSDate *fireDate;

- (void)_cleanupTimer;
- (void)_callTarget;
- (id)initWithQueue:(id)a0 target:(id)a1 selector:(SEL)a2 fireTime:(unsigned long long)a3;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;

@end
