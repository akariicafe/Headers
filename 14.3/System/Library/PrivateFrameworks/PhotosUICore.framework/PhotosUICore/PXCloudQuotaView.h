@class UIView;

@interface PXCloudQuotaView : UIView {
    UIView *_contentView;
}

- (id)initWithContentView:(id)a0;
- (id)_font;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
