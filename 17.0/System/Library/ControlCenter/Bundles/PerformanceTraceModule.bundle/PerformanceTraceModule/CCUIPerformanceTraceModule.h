@class NSString, CCUIPerformanceTraceModuleViewController, CCUIContentModuleContext, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIPerformanceTraceModule : NSObject <CCUIContentModule> {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (retain, nonatomic) CCUIPerformanceTraceModuleViewController *viewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentModuleContext:(id)a0;
- (id)contentViewControllerForContext:(id)a0;
- (void).cxx_destruct;

@end
