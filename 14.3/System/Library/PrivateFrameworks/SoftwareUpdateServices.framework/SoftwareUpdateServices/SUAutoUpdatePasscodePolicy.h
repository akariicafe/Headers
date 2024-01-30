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

- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)description;
- (id)_init;
- (void)setCurrentPolicyType:(unsigned long long)a0;
- (BOOL)_isValidPasscodePolicyType:(unsigned long long)a0;
- (id)stringForCurrentPolicy;

@end
