@class _UILegibilitySettings, NSString, NSCache, UIButton;

@interface WGNewWidgetsButton : UIButton {
    UIButton *_vibrantButton;
    UIButton *_overlayButton;
    NSCache *_numberAttributedStringCache;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *numberText;
@property (nonatomic) unsigned long long badgeNumber;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void)layoutSubviews;
- (void)_updateButtons;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)_textFont;
- (void)_buttonStateChanged:(id)a0;
- (void)_buttonPushed:(id)a0;
- (void)_setAttributeTitleForButton:(id)a0 withColor:(id)a1;
- (id)_attributedStringWithColor:(id)a0;
- (id)_numberFont;
- (id)_numberTextAttributes;
- (id)_numberAttributedStringWithNumberText:(id)a0 attributes:(id)a1;
- (id)_textAttributesWithColor:(id)a0;
- (id)_numberImageForNumberText:(id)a0 withAttributes:(id)a1;
- (struct CGSize { double x0; double x1; })_numberLabelSizeForText:(id)a0 withAttributes:(id)a1;
- (void)updateForContentCategorySizeChange;

@end
