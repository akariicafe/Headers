@class UIColor, NSMutableAttributedString;

@interface WGWidgetAttributionView : UITextView {
    NSMutableAttributedString *_widgetAttributedString;
}

@property (retain, nonatomic) UIColor *legibilityTextColor;

+ (void)requestAttributedStringForIdentifier:(id)a0 withHandler:(id /* block */)a1;
+ (id)widgetAttributionIDsInOrder;

- (void)layoutSubviews;
- (id)_paragraphStyle;
- (void).cxx_destruct;
- (id)initWithWidgetAttributedString:(id)a0;
- (void)_configureAttributedString;
- (id)_attributionBackgroundColor;
- (id)_attributionFont;

@end
