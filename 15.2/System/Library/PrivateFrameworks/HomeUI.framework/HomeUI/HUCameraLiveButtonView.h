@class UIButton, AVBackgroundView;

@interface HUCameraLiveButtonView : UIView

@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) AVBackgroundView *avBackground;

- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateDisplayForStreaming:(BOOL)a0;

@end
