@class NSString, CCUIContentModuleContext, NSHashTable, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIConnectivityModule : NSObject <CCUIContentModule> {
    CCUIContentModuleContext *_contentModuleContext;
    NSHashTable *_contentViewControllers;
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
- (id)init;

@end
