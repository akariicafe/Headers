@class UILabel, EMFEmojiToken, UIView;

@interface TUIEmojiVariantCell : UIView

@property (readonly, nonatomic) UILabel *labelView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) EMFEmojiToken *emojiToken;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 token:(id)a1;

@end
