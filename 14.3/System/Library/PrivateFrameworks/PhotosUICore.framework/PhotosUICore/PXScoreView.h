@class UILabel;

@interface PXScoreView : UIView {
    UILabel *_label;
    unsigned long long _colorScale;
}

- (id)init;
- (void).cxx_destruct;
- (void)setScore:(double)a0;
- (void)layoutSubviews;
- (id)initWithColorScale:(unsigned long long)a0;

@end
