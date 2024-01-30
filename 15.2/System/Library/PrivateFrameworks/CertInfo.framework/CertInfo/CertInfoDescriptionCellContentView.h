@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    struct CGSize { double x0; double x1; } *_sizes;
}

- (void)layoutSubviews;
- (double)rowHeight;
- (id)_labelFont;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_valueFont;
- (void)setLabelsAndValues:(id)a0;
- (void)_recalculateIdealHeight;

@end
