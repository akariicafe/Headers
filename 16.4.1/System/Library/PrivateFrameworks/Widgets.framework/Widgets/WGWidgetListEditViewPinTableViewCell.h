@class WGWidgetPinningTeachingAnimationView, UISwitch;

@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell {
    WGWidgetPinningTeachingAnimationView *_pinImageView;
}

@property (readonly, nonatomic) UISwitch *pinSwitch;

- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
