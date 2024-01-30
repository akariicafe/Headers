@class NSString, UIImageView, UIImage, UILabel;

@interface WFActionDrawerButton : UIButton

@property (weak, nonatomic) UIImageView *iconView;
@property (weak, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) unsigned long long style;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)updateColors;
- (id)initWithTitle:(id)a0 icon:(id)a1 style:(unsigned long long)a2;
- (id)mainColorForStyle:(unsigned long long)a0;
- (id)accentColorForStyle:(unsigned long long)a0;

@end
