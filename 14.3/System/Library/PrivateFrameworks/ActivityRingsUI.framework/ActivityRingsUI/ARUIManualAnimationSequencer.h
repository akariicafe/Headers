@class NSString, ARUIObserverStore;

@interface ARUIManualAnimationSequencer : NSObject <ARUIAnimationSequencing> {
    ARUIObserverStore *_observers;
    id /* block */ _completion;
    double _timeUntilCompletion;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tick;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)performAfter:(double)a0 completion:(id /* block */)a1;

@end
