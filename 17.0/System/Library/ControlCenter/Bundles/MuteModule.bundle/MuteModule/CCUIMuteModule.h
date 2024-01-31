@class NSString, UIViewController;
@protocol BSInvalidatable, CCUIContentModuleBackgroundViewController, CCUIControlCenterSystemAgent, CCUIContentModuleContentViewController;

@interface CCUIMuteModule : CCUIToggleModule <CCUIInternalContentModule> {
    id<CCUIControlCenterSystemAgent> _systemAgent;
    id<BSInvalidatable> _observerToken;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSystemAgent:(id)a0;
- (void)dealloc;
- (BOOL)isSelected;
- (void)_updateState;
- (void)_observeSystemNotifications;
- (id)glyphPackageDescription;
- (void)_unobserveSystemNotifications;
- (void).cxx_destruct;
- (id)glyphState;
- (void)_updateForDarkerSystemColorsChange;
- (void)setSelected:(BOOL)a0;

@end
