@class UILabel, PXHUDBoxedValueVisualization;

@interface PXHUDBoxedValueVisualizationView : PXHUDAbstractVisualizationView {
    UILabel *_titleAndValueLabel;
}

@property (retain, nonatomic) PXHUDBoxedValueVisualization *visualization;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateTitleAndValueLabel;
- (void)visualizationDidUpdate;

@end
