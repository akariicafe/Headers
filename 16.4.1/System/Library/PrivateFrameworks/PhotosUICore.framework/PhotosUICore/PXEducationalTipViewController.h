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

- (BOOL)_canShowWhileLocked;
- (void)_invalidateContent;
- (void)viewDidLoad;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)_handleDismissButton:(id)a0;

@end
