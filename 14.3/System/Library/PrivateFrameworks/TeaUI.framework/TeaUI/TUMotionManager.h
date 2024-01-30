@interface TUMotionManager : NSObject {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ operationQueue;
    void /* unknown type, empty encoding */ coreMotionManager;
}

@property (class, nonatomic, readonly) TUMotionManager *shared;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleReduceMotionChanged;
- (void)scenDidEnterBackground;
- (void)sceneDidBecomeActive;

@end
