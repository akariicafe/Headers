@class NSString, CCUIContentModuleContext, CCUIDisplayModuleViewController, CCUIDisplayBackgroundViewController, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIDisplayModule : NSObject <CCUIContentModule, CCUIDisplayModuleViewControllerDelegate> {
    CCUIContentModuleContext *_contentModuleContext;
    CCUIDisplayModuleViewController *_moduleViewController;
    CCUIDisplayBackgroundViewController *_backgroundViewController;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
