@class UIView;

@interface PXCloudQuotaView : UIView

@property (readonly, nonatomic) UIView *contentView;

- (id)initWithContentView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)contentViewFont;
- (struct CGSize { double x0; double x1; })contentViewSizeForWidth:(double)a0;

@end
