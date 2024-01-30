@class UIWindow, NSString, UIPrintInteractionController, UIViewController;

@interface UIPrintActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate>

@property (retain) UIViewController *wrapperViewController;
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController;
@property (retain) UIWindow *windowHoldingActivityViewController;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (void)cancelPrintOptions;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)printInteractionControllerWindowForPresentation:(id)a0;
- (id)_embeddedActivityViewController;
- (id)printInteractionControllerParentViewController:(id)a0;
- (id)activityTitle;
- (id)_systemImageName;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
