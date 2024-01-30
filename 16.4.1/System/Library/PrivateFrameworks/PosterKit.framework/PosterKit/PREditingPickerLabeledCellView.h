@class UILabel;

@interface PREditingPickerLabeledCellView : UIButton

@property (readonly, nonatomic) UILabel *contentLabel;
@property (readonly, nonatomic) UILabel *nameLabel;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
