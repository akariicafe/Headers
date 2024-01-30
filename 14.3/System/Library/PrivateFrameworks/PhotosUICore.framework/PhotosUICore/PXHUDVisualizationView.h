@class UILabel;

@interface PXHUDVisualizationView : PXHUDAbstractVisualizationView {
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)visualizationDidUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTitleLabel;

@end
