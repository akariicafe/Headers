@class SBStatusBarSettings, NSString, NSHashTable;

@interface SBSceneViewStatusBarAssertion : NSObject <BSInvalidatable> {
    NSHashTable *_observers;
}

@property (nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (nonatomic) long long nubViewHidden;
@property (copy, nonatomic) SBStatusBarSettings *settings;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)_notifyObserversDidInvalidate;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithStatusBarHidden:(BOOL)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (id)initWithStatusBarSettings:(id)a0 nubViewHidden:(long long)a1 atLevel:(unsigned long long)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_notifyObserversDidUpdate;

@end
