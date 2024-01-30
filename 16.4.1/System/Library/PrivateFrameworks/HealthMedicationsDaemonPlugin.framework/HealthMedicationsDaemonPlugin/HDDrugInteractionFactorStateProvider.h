@class NSUserDefaults, HDDaemon, HKObserverSet;
@protocol HDDrugInteractionFactorStateObserver;

@interface HDDrugInteractionFactorStateProvider : NSObject <HDDrugInteractionFactorStateProvider> {
    HKObserverSet<HDDrugInteractionFactorStateObserver> *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUserDefaults *_lock_medicationsUserDefaults;
    BOOL _lock_isAlcoholDrugInteractionFactorEnabled;
    BOOL _lock_isMarijuanaDrugInteractionFactorEnabled;
    BOOL _lock_isTobaccoDrugInteractionFactorEnabled;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (id)initWithDaemon:(id)a0;
- (void)addDrugInteractionFactorStateObserver:(id)a0 queue:(id)a1;
- (void)monitorDrugInteractionFactorsInProfile:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeDrugInteractionFactorStateObserver:(id)a0;
- (id)init;
- (long long)hasDrugInteractionFactorInProfile:(id)a0;
- (void).cxx_destruct;

@end
