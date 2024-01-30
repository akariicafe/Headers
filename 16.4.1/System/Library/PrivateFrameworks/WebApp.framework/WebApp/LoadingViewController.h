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
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithWebClip:(id)a0 orientation:(long long)a1;

@end
