@class NSString, UIWindow, UIAlertController;

@interface MPVolumeSettingsController : UIViewController {
    NSString *_audioCategory;
    UIAlertController *_alertController;
}

@property (weak, nonatomic) UIWindow *hostingWindow;
@property (weak, nonatomic) UIWindow *previousWindow;

- (void)_flip;
- (id)initWithAudioCategory:(id)a0;
- (void)presentAlertControllerInWindow:(id)a0;
- (void)dismissAlertController;
- (void)_keyWindowDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
