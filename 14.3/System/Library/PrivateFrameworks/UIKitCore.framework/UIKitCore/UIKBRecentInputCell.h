@class UILabel;

@interface UIKBRecentInputCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;

+ (id)textColorForRenderConfig:(id)a0 isSelected:(BOOL)a1;
+ (id)titleAttributesForRenderConfig:(id)a0;

- (void)dealloc;
- (BOOL)isFocused;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (BOOL)_canFocusProgrammatically;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInputText:(id)a0;

@end
