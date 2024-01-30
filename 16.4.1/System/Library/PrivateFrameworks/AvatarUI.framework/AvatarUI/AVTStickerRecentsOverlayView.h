@class UIView, NSString, NSArray, UITapGestureRecognizer, UIImage, UIImageView, UIButton, NSLayoutConstraint, AVTStickerRecentsOverlayViewLayout, UILabel;
@protocol AVTStickerRecentsOverlayDelegate;

@interface AVTStickerRecentsOverlayView : UIVisualEffectView

@property (retain, nonatomic) UIView *centeredContainerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *portraitLayout;
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *landscapeLayout;
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *currentLayout;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) NSLayoutConstraint *containerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageToTitleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleToSubtitleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *hideSubtitleConstraint;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *animatableView;
@property (weak, nonatomic) id<AVTStickerRecentsOverlayDelegate> delegate;

+ (id)disclosureOverlayView;
+ (id)overlayViewForMemojiCreation;
+ (id)standardOverlayView;
+ (id)stickerButtonImage;

- (void)setupConstraints;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)appropriateLayout;
- (void)didTapCloseButton:(id)a0;
- (void)didTapContentView:(id)a0;
- (void)didTapContinueButton:(id)a0;
- (void)dismissAnimatedWithDuration:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subtitle:(id)a2 buttonTitle:(id)a3 image:(id)a4;

@end
