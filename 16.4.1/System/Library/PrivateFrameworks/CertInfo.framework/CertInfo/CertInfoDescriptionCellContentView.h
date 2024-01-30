@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    struct CGSize { double x0; double x1; } *_sizes;
}

- (double)rowHeight;
- (id)_labelFont;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_valueFont;
- (void)_recalculateIdealHeight;
- (void)setLabelsAndValues:(id)a0;

@end
