@class HKSPObserverSet;

@interface HKSPMuteMonitor : NSObject {
    int _notifyToken;
    HKSPObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isMuted;
}

@property (readonly, nonatomic) BOOL isMuted;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)setIsMuted:(BOOL)a0;
- (void)dealloc;
- (void)_updateIsMuted;
- (void)addObserver:(id)a0 queue:(id)a1;

@end
