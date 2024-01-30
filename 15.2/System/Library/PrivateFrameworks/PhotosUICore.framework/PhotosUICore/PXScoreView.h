@class UILabel;

@interface PXScoreView : UIView {
    UILabel *_label;
    unsigned long long _colorScale;
}

- (void)layoutSubviews;
- (void)setScore:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithColorScale:(unsigned long long)a0;

@end
