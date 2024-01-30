@class CAShapeLayer, UIImage, UIView, UIButton;
@protocol CFXPlayButtonViewDelegate;

@interface CFXPlayButtonView : UIView

@property (retain, nonatomic) CAShapeLayer *playControlMaskLayer;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (weak, nonatomic) id<CFXPlayButtonViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playButtonTapped:(id)a0;
- (void)sharedInit;
- (void)notifyPlaybackDidStart;
- (void)notifyPlaybackDidStop;
- (void)notifyWasTapped;

@end
