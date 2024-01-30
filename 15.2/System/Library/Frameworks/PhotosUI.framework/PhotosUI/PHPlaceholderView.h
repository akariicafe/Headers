@class UIImageView, UILabel, UIView;

@interface PHPlaceholderView : UIView

@property (retain, nonatomic, setter=_setContainer:) UIView *_container;
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (retain, nonatomic, setter=_setAirPlayLabel:) UILabel *_airPlayLabel;
@property (retain, nonatomic, setter=_setAppleTVMessageLabel:) UILabel *_appleTVMessageLabel;
@property (readonly, nonatomic) long long type;

- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_appleTVMessage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;

@end
