@class NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIControlCenterSystemAgent, CCUIContentModuleContentViewController;

@interface CCUIOrientationLockModule : CCUIToggleModule <CCUIInternalContentModule> {
    id<CCUIControlCenterSystemAgent> _systemAgent;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSelected;
- (void)_updateState;
- (void)setSelected:(BOOL)a0;
- (id)initWithSystemAgent:(id)a0;
- (id)glyphPackageDescription;
- (id)glyphState;
- (void)dealloc;
- (void)_unobserveSystemNotifications;
- (void)_observeSystemNotifications;
- (void).cxx_destruct;
- (void)_updateForDarkerSystemColorsChange;

@end
