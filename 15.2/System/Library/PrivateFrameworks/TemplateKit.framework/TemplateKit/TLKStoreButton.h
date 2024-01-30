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

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToWindow;

@end
