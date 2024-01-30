@class NSString, UIView;

@interface DMCDevicePINPane : DevicePINPane

@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) UIView *descriptionLabel;
@property (readonly, nonatomic) UIView *passcodeField;

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0;
- (id)_textFont;

@end
