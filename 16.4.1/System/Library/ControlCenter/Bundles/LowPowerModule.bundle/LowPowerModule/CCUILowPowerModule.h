@class NSString, UIViewController, CCUIContentModuleContext;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUILowPowerModule : NSObject <CCUIContentModule> {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewControllerForContext:(id)a0;
- (void)setContentModuleContext:(id)a0;
- (void).cxx_destruct;

@end
