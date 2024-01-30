@class EFDebouncer, NSHashTable;
@protocol EFAssertableScheduler;

@interface EDVisibleMessagesReloadRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    id<EFAssertableScheduler> _observationScheduler;
    EFDebouncer *_reloadDebouncer;
    int _notifyToken;
}

+ (id)log;

- (id)addObserver:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reloadVisibleMessages;
- (void)_scheduleVisibleMessageReload;

@end
