@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    struct CGSize { double x0; double x1; } *_sizes;
}

- (void).cxx_destruct;
- (id)_labelFont;
- (void)dealloc;
- (double)rowHeight;
- (void)layoutSubviews;
- (id)_valueFont;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLabelsAndValues:(id)a0;
- (void)_recalculateIdealHeight;

@end
