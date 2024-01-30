@class UIButton;

@interface WFVariableShortcutsBarButtonCell : UICollectionViewCell

@property (readonly, nonatomic) UIButton *contentButton;

+ (id)titleFont;
+ (double)widthWithTitle:(id)a0 icon:(id)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
