@class UIView, NSString, NSArray, UIImage, NSAttributedString, UIImageView, UILayoutGuide, UILabel;

@interface _SFSettingsAlertButton : _SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration> {
    NSString *_text;
    NSAttributedString *_attributedText;
    NSArray *_contentConstraints;
    NSArray *_componentsArrangement;
    UILabel *_detailTextLabel;
    UILayoutGuide *_textGuide;
}

@property (readonly, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *textStyle;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) UIView *trailingView;
@property (copy, nonatomic) NSArray *componentsArrangement;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateTintColor;
- (void).cxx_destruct;
- (void)_hover:(id)a0;
- (void)updateConstraints;
- (id)_arrangedSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_didChangeContents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
