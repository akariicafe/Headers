@class WGWidgetPinningTeachingAnimationView, UISwitch;

@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell {
    WGWidgetPinningTeachingAnimationView *_pinImageView;
}

@property (readonly, nonatomic) UISwitch *pinSwitch;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)stopAnimating;
- (void)startAnimating;

@end
