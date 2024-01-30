@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    struct _MKBEvent { } *_mkbRegistrationToken;
    BOOL _queue_isEffectivelyLocked;
}

+ (id)sharedInstance;

- (BOOL)isEffectivelyLocked;
- (void)addObserver:(id)a0;
- (void)_queue_handleKeybagStatusChanged;
- (void)removeObserver:(id)a0;
- (BOOL)_queue_isEffectivelyLocked;
- (id)init;
- (void).cxx_destruct;

@end
