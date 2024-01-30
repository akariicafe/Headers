@class UILabel, NSString;

@interface PUPhotoEditOverlayBadge : UIView

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (copy, nonatomic) NSString *text;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
