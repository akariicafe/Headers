@class NSString, UIWindow, UIAlertController;

@interface MPVolumeSettingsController : UIViewController {
    NSString *_audioCategory;
    UIAlertController *_alertController;
}

@property (weak, nonatomic) UIWindow *hostingWindow;
@property (weak, nonatomic) UIWindow *previousWindow;

- (void)_flip;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAudioCategory:(id)a0;
- (void)presentAlertControllerInWindow:(id)a0;
- (void)dismissAlertController;
- (void)_keyWindowDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
