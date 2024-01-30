@class MRUVolumeViewController, MRUVolumeBackgroundViewController, CCUIContentModuleContext, NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface MediaControlsAudioModule : NSObject <CCUIContentModule, MRUVolumeViewControllerDelegate, MRUVolumeBackgroundViewControllerDelegate>

@property (retain, nonatomic) MRUVolumeViewController *volumeViewController;
@property (retain, nonatomic) MRUVolumeBackgroundViewController *volumeBackgroundViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)volumeBackgroundViewController:(id)a0 didUpdatePrimaryInteractionEnabled:(BOOL)a1;
- (id)contentViewControllerForContext:(id)a0;
- (id)backgroundViewControllerForContext:(id)a0;
- (void)dismissVolumeViewController:(id)a0;
- (void)volumeBackgroundViewController:(id)a0 didUpdateSecondaryInteractionEnabled:(BOOL)a1;
- (void)volumeViewController:(id)a0 didChangeSystemVolumeValue:(float)a1;
- (void).cxx_destruct;

@end
