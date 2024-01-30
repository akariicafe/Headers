@class UIImageView, UIView;

@interface HROnboardingWristImageView : UIView

@property (readonly, nonatomic) long long watchImageStyle;
@property (readonly, nonatomic) UIImageView *wristWatchImageView;
@property (retain, nonatomic) UIView *wristWatchContentView;

- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setTimeRemaining:(double)a0;
- (id)_wristWatchContentViewForStyle:(long long)a0;
- (id)initWithImageStyle:(long long)a0;

@end
