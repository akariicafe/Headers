@class UIView;

@interface PXCloudQuotaView : UIView {
    UIView *_contentView;
}

- (id)initWithContentView:(id)a0;
- (id)_font;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentViewSizeForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;

@end
