@class UIButton, UIView;
@protocol HUTimerCancelDelegate;

@interface HUTimerCancelButtonView : UIView

@property (retain, nonatomic) UIView *circleBackgroundView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) id<HUTimerCancelDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_cancelTimer:(id)a0;

@end
