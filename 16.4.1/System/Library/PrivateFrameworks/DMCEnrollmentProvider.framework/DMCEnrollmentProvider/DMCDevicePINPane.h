@class NSString, UIView;

@interface DMCDevicePINPane : DevicePINPane

@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) UIView *descriptionLabel;
@property (readonly, nonatomic) UIView *passcodeField;

- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)_textFont;

@end
