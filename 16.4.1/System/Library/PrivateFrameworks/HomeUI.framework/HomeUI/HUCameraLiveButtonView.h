@class UIButton, AVBackgroundView;

@interface HUCameraLiveButtonView : UIView

@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) AVBackgroundView *avBackground;

- (void)didMoveToSuperview;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)updateDisplayForStreaming:(BOOL)a0;

@end
