@class NUIWidgetGridView;

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell> {
    NUIWidgetGridView *_gridView;
    double _width;
    unsigned long long _index;
}

@property (readonly, nonatomic) unsigned long long index;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct { double x0; double x1; })donatableSpaceAllowRemeasure:(BOOL)a0;
- (id)initWithWidgetGridView:(id)a0 item:(id)a1 index:(unsigned long long)a2;
- (struct { double x0; double x1; })donatableSpace;

@end
