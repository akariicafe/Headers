@class NSString, UIVisualEffectView, UIImage, UIImageView, UILabel, UIButton;

@interface PXEducationalTipViewController : UIViewController {
    UIVisualEffectView *_visualEffectView;
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UIButton *_dismissButton;
}

@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *dismissButtonTitle;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (void)_invalidateContent;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)_handleDismissButton:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
