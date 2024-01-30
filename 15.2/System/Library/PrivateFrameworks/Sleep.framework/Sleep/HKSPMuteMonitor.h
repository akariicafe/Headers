@class HKSPObserverSet;

@interface HKSPMuteMonitor : NSObject {
    int _notifyToken;
    HKSPObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isMuted;
}

@property (readonly, nonatomic) BOOL isMuted;

- (void)addObserver:(id)a0 queue:(id)a1;
- (void)setIsMuted:(BOOL)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateIsMuted;

@end
