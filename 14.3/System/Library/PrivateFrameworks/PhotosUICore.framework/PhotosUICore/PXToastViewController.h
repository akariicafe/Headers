@class PXToastPresentationWindow, NSString, UIImage, UIImageView, CAShapeLayer, UINotificationFeedbackGenerator, UIVisualEffectView, UILabel;
@protocol PXToastViewControllerDelegate;

@interface PXToastViewController : UIViewController

@property (retain, nonatomic) PXToastPresentationWindow *presentationWindow;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL shouldUseAnimatedCheckmark;
@property (retain, nonatomic) UIVisualEffectView *toastView;
@property (retain, nonatomic) CAShapeLayer *checkLayer;
@property (retain, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<PXToastViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *image;

+ (id)_secondaryLabelFont;
+ (id)_primaryLabelFont;
+ (id)toastWithTitle:(id)a0 message:(id)a1 image:(id)a2;
+ (id)_fontWithSize:(double)a0 textStyleAttribute:(struct __CFString { } *)a1;
+ (id)checkmarkToastWithTitle:(id)a0 message:(id)a1;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)a0 message:(id)a1 image:(id)a2;
- (id)initCheckmarkToastWithTitle:(id)a0 message:(id)a1;
- (void)_dismissAfterDelay:(double)a0;
- (void)_animateCheckMark;
- (void)presentOnWindowScene:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
