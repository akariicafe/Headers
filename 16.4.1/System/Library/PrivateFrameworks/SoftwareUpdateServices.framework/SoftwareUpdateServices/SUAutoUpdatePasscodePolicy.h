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
- (id)_init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)description;
- (BOOL)_isValidPasscodePolicyType:(unsigned long long)a0;
- (void)setCurrentPolicyType:(unsigned long long)a0;
- (id)stringForCurrentPolicy;

@end
