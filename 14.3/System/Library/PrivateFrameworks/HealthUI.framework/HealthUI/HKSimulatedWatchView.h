@class UIView;

@interface HKSimulatedWatchView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *watchScreenView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithIconImage:(id)a0 titleText:(id)a1 detailText:(id)a2 tintColor:(id)a3;
- (id)initWithWatchView:(id)a0;

@end
