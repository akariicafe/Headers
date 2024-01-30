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

- (void)_queue_handleKeybagStatusChanged;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEffectivelyLocked;
- (BOOL)_queue_isEffectivelyLocked;

@end
