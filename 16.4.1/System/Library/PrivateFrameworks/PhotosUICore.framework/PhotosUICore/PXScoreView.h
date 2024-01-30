@class UILabel;

@interface PXScoreView : UIView {
    UILabel *_label;
    unsigned long long _colorScale;
}

- (void)setScore:(double)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)initWithColorScale:(unsigned long long)a0;

@end
