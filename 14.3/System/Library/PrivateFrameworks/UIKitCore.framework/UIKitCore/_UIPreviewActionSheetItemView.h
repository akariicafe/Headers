@class UILabel, UIImageView, UIPreviewAction;

@interface _UIPreviewActionSheetItemView : UIView

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) UIPreviewAction *action;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_contentSizeChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 action:(id)a1;
- (void)_updateLabelFont;
- (void)_updateTitleFromAction;
- (void)_updateImageFromAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstraints;

@end
