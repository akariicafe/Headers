@class UIColor, NSMutableAttributedString;

@interface WGWidgetAttributionView : UITextView {
    NSMutableAttributedString *_widgetAttributedString;
}

@property (retain, nonatomic) UIColor *legibilityTextColor;

+ (id)widgetAttributionIDsInOrder;
+ (void)requestAttributedStringForIdentifier:(id)a0 withHandler:(id /* block */)a1;

- (id)_paragraphStyle;
- (id)_attributionBackgroundColor;
- (void).cxx_destruct;
- (id)_attributionFont;
- (void)layoutSubviews;
- (id)initWithWidgetAttributedString:(id)a0;
- (void)_configureAttributedString;

@end
