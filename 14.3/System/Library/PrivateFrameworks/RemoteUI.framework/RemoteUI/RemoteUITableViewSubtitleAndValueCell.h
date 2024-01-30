@class UILabel;

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {
    UILabel *_valueLabel;
}

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)valueLabel;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_adjustFrameOfView:(id)a0 distance:(double)a1;
- (id)effectiveDetailTextLabel;
- (id)effectiveValueTextLabel;

@end
