@class CCUIContentModuleContext, AXCCGuidedAccessModuleViewController, NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController;

@interface AXCCGuidedAccessModule : NSObject <AXCCGuidedAccessModuleViewControllerDelegate, CCUIContentModule>

@property (retain, nonatomic) AXCCGuidedAccessModuleViewController *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)openGuidedAccessSettings;

@end
