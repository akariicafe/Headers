@class UIApplicationSceneClientSettingsDiffInspector, SBDeviceApplicationSceneHandle, NSString, UIView;

@interface SBNubView : UIView <SBDeviceApplicationSceneHandleObserver> {
    UIApplicationSceneClientSettingsDiffInspector *_applicationSceneClientSettingsDiffInspector;
}

@property (class, readonly, nonatomic) double hitTestWidth;
@property (class, readonly, nonatomic) double height;

@property (readonly, nonatomic) UIView *nubView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *deviceApplicationSceneHandle;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDeviceApplicationSceneHandle:(id)a0;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;
- (void)_updateNubViewBackgroundColor;

@end
