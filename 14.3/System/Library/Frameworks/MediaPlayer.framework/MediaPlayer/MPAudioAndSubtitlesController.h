@class UINavigationController, UIViewController, _MPAudioAndSubtitlesController;

@interface MPAudioAndSubtitlesController : UIViewController {
    _MPAudioAndSubtitlesController *_viewController;
    UINavigationController *_navController;
}

@property (weak, nonatomic) UIViewController *viewControllerForOrientation;

- (void).cxx_destruct;
- (id)initWithAVItem:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
