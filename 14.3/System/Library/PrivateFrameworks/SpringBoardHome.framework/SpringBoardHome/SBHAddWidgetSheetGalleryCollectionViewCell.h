@class SBHWidgetWrapperViewController, UIView;

@interface SBHAddWidgetSheetGalleryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
