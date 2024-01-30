@class NSString, UILabel;

@interface _UIPreviewActionSheetTitleView : UIView

@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) UILabel *label;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_contentSizeChanged:(id)a0;
- (void)_updateLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1;
- (void)dealloc;

@end
