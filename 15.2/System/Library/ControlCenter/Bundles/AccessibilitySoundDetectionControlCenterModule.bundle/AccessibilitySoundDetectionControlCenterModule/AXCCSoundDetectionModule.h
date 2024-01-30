@class AXCCSoundDetectionModuleViewController, CCUIContentModuleContext, NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController;

@interface AXCCSoundDetectionModule : CCUIToggleModule <AXCCSoundDetectionModuleViewControllerDelegate, CCUIContentModule>

@property (retain, nonatomic) AXCCSoundDetectionModuleViewController *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)expandModule;
- (BOOL)isSelected;
- (void)openSoundDetectionSettings;

@end
