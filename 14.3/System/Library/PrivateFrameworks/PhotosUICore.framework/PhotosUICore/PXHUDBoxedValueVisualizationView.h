@class UILabel, PXHUDBoxedValueVisualization;

@interface PXHUDBoxedValueVisualizationView : PXHUDAbstractVisualizationView {
    UILabel *_titleAndValueLabel;
}

@property (retain, nonatomic) PXHUDBoxedValueVisualization *visualization;

- (void).cxx_destruct;
- (void)visualizationDidUpdate;
- (void)_updateTitleAndValueLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
