@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (void)removeAllObservers;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (id)description;
- (void).cxx_destruct;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)_addObserver:(id)a0 forSetting:(unsigned long long)a1 inInfo:(id)a2;
- (void)_observeSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;

@end
