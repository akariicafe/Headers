@class TVRMContentViewController, CCUIContentModuleContext, NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController;

@interface TVRemoteModule : NSObject <CCUIContentModule>

@property (retain, nonatomic) TVRMContentViewController *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *moduleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewControllerForContext:(id)a0;
- (void)setContentModuleContext:(id)a0;
- (void).cxx_destruct;

@end
