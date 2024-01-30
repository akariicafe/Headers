@class CCUIContentModuleContext, NSString, HUCCLockStateHandler, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface HUCCControlCenterModule : NSObject <HUCCSmartGridContentViewControllerDelegate, HUCCLockStateHandlerDelegate, CCUIContentModule>

@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (retain, nonatomic) HUCCLockStateHandler *lockStateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;

- (void).cxx_destruct;
- (id)init;
- (void)lockStateWasUpdated:(BOOL)a0;
- (void)smartGridContentViewController:(id)a0 viewWillAppear:(BOOL)a1;
- (void)smartGridContentViewController:(id)a0 viewDidDisappear:(BOOL)a1;
- (void)launchHomeAppForSmartGridContentViewController:(id)a0;
- (BOOL)isDeviceUnlockedForSmartGridContentViewController:(id)a0;

@end
