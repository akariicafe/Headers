@class CCUIContentModuleContext, AXCCTextSizeModuleViewController, NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController;

@interface AXCCTextSizeModule : NSObject <AXCCTextSizeModuleViewControllerDelegate, CCUIContentModule>

@property (retain, nonatomic) AXCCTextSizeModuleViewController *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundViewControllerForContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)expandModule;

@end
