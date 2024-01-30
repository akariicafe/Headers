@class NSString, CCUIContentModuleContext, HACCModuleViewController, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface HACCContentModule : NSObject <CCUIContentModule> {
    HACCModuleViewController *_moduleViewController;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewControllerForContext:(id)a0;
- (id)backgroundViewControllerForContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEnabled;

@end
