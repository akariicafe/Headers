@class SBAppStatusBarSettings, NSString, NSHashTable;

@interface SBSceneViewStatusBarAssertion : NSObject <BSInvalidatable> {
    NSHashTable *_observers;
}

@property (nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (nonatomic) long long nubViewHidden;
@property (copy, nonatomic) SBAppStatusBarSettings *settings;
@property (nonatomic) BOOL shouldDrawStatusBarInsideSceneView;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_notifyObserversDidInvalidate;
- (void)_notifyObserversDidUpdate;
- (void)invalidate;
- (id)initWithStatusBarSettings:(id)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;

@end
