@class UIImage, UIImageView, UIView;

@interface LoadingViewController : UIViewController {
    BOOL _imageIsFullScreen;
    UIImage *_image;
    UIImageView *_imageView;
    long long _orientation;
    UIView *_statusBarView;
    long long _preferredStatusBarStyle;
}

- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithWebClip:(id)a0 orientation:(long long)a1;

@end
