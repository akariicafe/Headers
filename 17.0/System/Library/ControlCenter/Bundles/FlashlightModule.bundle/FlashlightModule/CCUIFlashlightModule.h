@class CCUIFlashlightBackgroundViewController, CCUIFlashlightModuleViewController, NSString;

@interface CCUIFlashlightModule : NSObject <CCUIContentModule>

@property (readonly, nonatomic) CCUIFlashlightModuleViewController *contentViewController;
@property (readonly, nonatomic) CCUIFlashlightBackgroundViewController *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewControllerForContext:(id)a0;
- (void).cxx_destruct;
- (id)backgroundViewControllerForContext:(id)a0;

@end
