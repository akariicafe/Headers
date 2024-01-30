@class UIFont, NSString, TLKProminenceView, TLKLabel, UIView, TLKRichText;

@interface TLKStoreButton : UIButton

@property (retain) TLKLabel *label;
@property (retain) UIView *backgroundView;
@property (retain) TLKProminenceView *highlightView;
@property BOOL isEmphasized;
@property (nonatomic) BOOL useCompactMode;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *title;

- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
