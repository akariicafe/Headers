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
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)performAfter:(double)a0 completion:(id /* block */)a1;

@end
