@class UIColor;

@interface HealthExposureNotificationUI.IconTextView : UIView {
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ details;
    void /* unknown type, empty encoding */ highlightedText;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ textStack;
    void /* unknown type, empty encoding */ iconView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didTapText:(id)a0;

@end
