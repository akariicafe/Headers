@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (void)removeAllObservers;
- (void)_addObserver:(id)a0 forSetting:(unsigned long long)a1 inInfo:(id)a2;
- (void)_observeSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;

@end
