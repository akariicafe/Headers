@class MRUControlCenterViewController, UIViewController, NSString;
@protocol CCUIContentModuleBackgroundViewController;

@interface MediaControlsModule : NSObject <CCUIContentModule>

@property (retain, nonatomic) MRUControlCenterViewController *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentModuleContext:(id)a0;
- (id)init;
- (id)contentViewControllerForContext:(id)a0;
- (void).cxx_destruct;

@end
