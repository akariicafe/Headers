@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface SUAutoUpdatePasscodePolicy : NSObject {
    NSHashTable *_queue_observers;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    int _stateChangedNotifyToken;
    unsigned long long _queue_currentPolicyType;
}

@property (readonly, nonatomic) unsigned long long currentPolicyType;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)description;
- (void)setCurrentPolicyType:(unsigned long long)a0;
- (id)init;
- (id)_init;
- (void)dealloc;
- (id)stringForCurrentPolicy;
- (BOOL)_isValidPasscodePolicyType:(unsigned long long)a0;

@end
