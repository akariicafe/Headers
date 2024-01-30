@class NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIControlCenterSystemAgent, CCUIContentModuleContentViewController;

@interface CCUIWalletModule : CCUIAppLauncherModule <CCUIInternalContentModule> {
    id<CCUIControlCenterSystemAgent> _systemAgent;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSystemAgent:(id)a0;
- (void).cxx_destruct;
- (void)handleTapWithTouchType:(long long)a0;

@end
