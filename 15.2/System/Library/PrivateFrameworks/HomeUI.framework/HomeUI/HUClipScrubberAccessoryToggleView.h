@class UIButton, UIView;

@interface HUClipScrubberAccessoryToggleView : UIView

@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) UIView *backgroundView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)displayForTimelineState:(unsigned long long)a0;
- (void)displayWithoutBackgroundVisualEffects;

@end
