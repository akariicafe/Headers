@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDSKeybag : NSObject <DNDSKeybagStateProviding> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    BOOL _queue_hasUnlockedSinceBoot;
    struct _MKBEvent { } *_mbkEvent;
}

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) BOOL hasUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_queue_handleFirstUnlock;
- (void)_queue_handleKeybagStatusChanged;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_beginObservingKeybag;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
