@class UILabel;

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {
    UILabel *_valueLabel;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)valueLabel;
- (void)_adjustFrameOfView:(id)a0 distance:(double)a1;
- (id)effectiveDetailTextLabel;
- (id)effectiveValueTextLabel;

@end
