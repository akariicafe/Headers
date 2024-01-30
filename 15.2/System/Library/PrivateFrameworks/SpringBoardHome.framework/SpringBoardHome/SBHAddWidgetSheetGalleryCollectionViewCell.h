@class SBHWidgetWrapperViewController, UILabel, UIView;

@interface SBHAddWidgetSheetGalleryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController;
@property (readonly, nonatomic) UILabel *debugLabel;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
