@class NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIControlCenterSystemAgent, CCUIContentModuleContentViewController;

@interface CCUIMuteModule : CCUIToggleModule <CCUIInternalContentModule> {
    id<CCUIControlCenterSystemAgent> _systemAgent;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSystemAgent:(id)a0;
- (id)glyphPackageDescription;
- (id)glyphState;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(BOOL)a0;
- (void)_updateState;
- (void)_observeSystemNotifications;
- (void)_unobserveSystemNotifications;
- (void)_updateForDarkerSystemColorsChange;

@end
