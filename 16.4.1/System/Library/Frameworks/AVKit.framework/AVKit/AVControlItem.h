@class UIColor, NSString, AVButton, UIImage, UIView, UIFont;
@protocol AVControlItemDelegate;

@interface AVControlItem : NSObject {
    AVButton *_button;
    UIFont *_titleFont;
}

@property (weak, nonatomic) id<AVControlItemDelegate> delegate;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic, getter=isSecondGenerationControl) BOOL secondGenerationControl;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIColor *tintColor;

- (void)_updateTintColor;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityHint:(id)a0;
- (void)setAccessibilityAttributedLabel:(id)a0;
- (id)titleFont;
- (void).cxx_destruct;
- (void)setTitleFont:(id)a0;
- (void)setAccessibilityAttributedHint:(id)a0;
- (void)_createButton;
- (void)_updateButton;
- (void)_buttonTouchUpInside:(id)a0;
- (id)_formattedTitleString;
- (void)_notifyDelegateOfChangesIfNeeded;
- (id)initWithTitle:(id)a0 type:(long long)a1;

@end
