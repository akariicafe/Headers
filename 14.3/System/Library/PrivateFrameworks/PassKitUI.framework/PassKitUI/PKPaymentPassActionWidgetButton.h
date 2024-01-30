@class NSArray;

@interface PKPaymentPassActionWidgetButton : UIButton

@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) BOOL usesAccessibilityLayout;
@property (nonatomic) unsigned long long passActionType;

+ (double)widgetHeightWithAccessibilityLayout:(BOOL)a0;
+ (double)glyphImageHeight;

- (void)_applyStyles;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithWidgetViewStyle:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
