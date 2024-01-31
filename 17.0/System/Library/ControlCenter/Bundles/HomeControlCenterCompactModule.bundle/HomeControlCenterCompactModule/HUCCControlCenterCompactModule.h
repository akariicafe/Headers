@class CCUIContentModuleContext, NSString, HUCCLockStateHandler, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface HUCCControlCenterCompactModule : NSObject <HUCCCompactModuleContentViewControllerDelegate, HUCCLockStateHandlerDelegate, CCUIContentModule>

@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (retain, nonatomic) HUCCLockStateHandler *lockStateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isDeviceUnlockedForModuleContentViewController:(id)a0;
- (void)launchHomeAppForModuleContentViewController:(id)a0;
- (void)lockStateWasUpdated:(BOOL)a0;
- (void)moduleContentViewController:(id)a0 viewDidDisappear:(BOOL)a1;
- (void)moduleContentViewController:(id)a0 viewWillAppear:(BOOL)a1;

@end
