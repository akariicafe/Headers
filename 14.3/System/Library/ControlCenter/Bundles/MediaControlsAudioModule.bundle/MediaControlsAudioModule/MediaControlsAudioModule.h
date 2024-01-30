@class NSString, CCUIContentModuleContext, MediaControlsVolumeController, MediaControlsVolumeViewController, MediaControlsVolumeBackgroundViewController, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface MediaControlsAudioModule : NSObject <CCUIContentModule, MediaControlsVolumeViewControllerDelegate> {
    MediaControlsVolumeController *_volumeController;
    MediaControlsVolumeViewController *_moduleViewController;
    MediaControlsVolumeBackgroundViewController *_backgroundViewController;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dismissMediaControlsVolumeViewController:(id)a0;

@end
