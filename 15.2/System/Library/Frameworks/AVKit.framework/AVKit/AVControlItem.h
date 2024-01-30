@class UIColor, NSString, AVButton, UIImage, UIView, UIFont;

@interface AVControlItem : NSObject {
    AVButton *_button;
    UIFont *_titleFont;
}

@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIColor *tintColor;

- (void)setTitleFont:(id)a0;
- (id)titleFont;
- (void)_updateTintColor;
- (void)setAccessibilityAttributedLabel:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityAttributedHint:(id)a0;
- (void)setAccessibilityHint:(id)a0;
- (void).cxx_destruct;
- (void)_updateButton;
- (id)initWithTitle:(id)a0 type:(long long)a1;
- (void)_buttonTouchUpInside:(id)a0;

@end
