@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_addObserver:(id)a0 forSetting:(unsigned long long)a1 inInfo:(id)a2;
- (void)_observeSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;

@end
