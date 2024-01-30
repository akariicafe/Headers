@class NSArray, NSMutableArray;

@interface MCDetailsDescriptionView : UIView {
    NSArray *_information;
    NSMutableArray *_labels;
    NSMutableArray *_fields;
    struct CGSize { double x0; double x1; } *_sizes;
    unsigned long long _sizesCount;
    double _idealHeight;
    BOOL _usesDynamicAlignment;
    double _labelMaxWidth;
}

- (void).cxx_destruct;
- (id)_labelFont;
- (void)dealloc;
- (id)_valueFont;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_calculateHeightsForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 data:(id)a1;
- (double)heightForTableView;
- (void)setUsesDynamicAlignment:(BOOL)a0;

@end
