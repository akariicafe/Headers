@class EFObservable, NSObject;
@protocol OS_dispatch_queue, EFObserver;

@interface MFLockStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    EFObservable<EFObserver> *_observable;
    BOOL _isLocked;
}

@property (readonly, nonatomic) EFObservable *lockStateObservable;
@property (readonly, getter=isLocked) BOOL locked;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_receiveLockState:(BOOL)a0;

@end
