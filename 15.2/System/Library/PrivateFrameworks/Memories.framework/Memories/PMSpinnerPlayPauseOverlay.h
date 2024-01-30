@class UIView;

@interface PMSpinnerPlayPauseOverlay : UIView

@property (retain, nonatomic) UIView *spinnerView;
@property (retain, nonatomic) UIView *playPauseButton;
@property (nonatomic) unsigned long long displayState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setShowAsPause:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
