@class UIImageView;

@interface CKBrowserSelectionLabelAccessoryView : UIView

@property (retain, nonatomic) UIImageView *plusLView;
@property (retain, nonatomic) UIImageView *plusDView;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithLabelAccessoryType:(unsigned long long)a0;

@end
