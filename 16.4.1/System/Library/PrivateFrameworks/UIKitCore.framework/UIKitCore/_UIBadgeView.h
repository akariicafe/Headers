@class UIColor, NSString, NSDictionary, _UIBadgeVisualStyle, UILabel, NSMutableDictionary;

@interface _UIBadgeView : UIView {
    UILabel *_label;
    NSMutableDictionary *_mergedTextAttributes;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) UIColor *badgeColor;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } textOffset;
@property (retain, nonatomic) _UIBadgeVisualStyle *style;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_applyTextToLabel;
- (id)initWithText:(id)a0;
- (void)layoutSubviews;
- (void)_setUpLabelIfNecessary;
- (void).cxx_destruct;

@end
