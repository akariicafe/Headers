@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface TLBacklight : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    BOOL _isObservingBacklight;
    long long _backlightStatus;
}

@property (class, readonly) TLBacklight *sharedBacklight;

@property (readonly) long long backlightStatus;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_assertRunningOnAccessQueue;
- (void)dealloc;
- (void)_assertNotRunningOnAccessQueue;
- (void)_notifyObservers:(id)a0 ofUpdatedBacklightStatus:(long long)a1;
- (void)_setObservingBacklight:(BOOL)a0;
- (void)_setBacklightStatus:(long long)a0;

@end
