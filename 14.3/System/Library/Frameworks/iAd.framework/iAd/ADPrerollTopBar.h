@class ADPrerollButton, ADProgressView, UIStatusBar;
@protocol ADPrerollTopBarDelegate;

@interface ADPrerollTopBar : UIView

@property (retain, nonatomic) UIStatusBar *statusBar;
@property (retain, nonatomic) ADPrerollButton *doneButton;
@property (retain, nonatomic) ADProgressView *progressView;
@property (weak, nonatomic) id<ADPrerollTopBarDelegate> delegate;
@property (nonatomic) BOOL isFullscreen;
@property (nonatomic) BOOL layoutForExpandedSize;

- (void).cxx_destruct;
- (double)requiredHeight;
- (void)_doneButtonTapped:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setElapsedTime:(double)a0 totalTime:(double)a1;
- (void)_scaleToFillButtonTapped:(id)a0;
- (void)_scaleToFitButtonTapped:(id)a0;

@end
