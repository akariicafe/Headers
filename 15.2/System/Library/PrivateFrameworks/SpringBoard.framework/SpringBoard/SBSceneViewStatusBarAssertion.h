@class SBAppStatusBarSettings, NSString, NSHashTable;

@interface SBSceneViewStatusBarAssertion : NSObject <BSInvalidatable> {
    NSHashTable *_observers;
}

@property (nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (nonatomic) long long nubViewHidden;
@property (copy, nonatomic) SBAppStatusBarSettings *settings;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (void)_notifyObserversDidInvalidate;
- (void)addObserver:(id)a0;
- (id)initWithStatusBarSettings:(id)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)_notifyObserversDidUpdate;

@end
