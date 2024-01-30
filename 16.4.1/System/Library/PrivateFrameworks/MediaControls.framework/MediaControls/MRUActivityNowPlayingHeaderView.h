@class MRUNowPlayingLabelView, MRUVisualStylingProvider;

@interface MRUActivityNowPlayingHeaderView : UIView

@property (readonly, nonatomic) MRUNowPlayingLabelView *labelView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly, nonatomic) double labelInset;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)updateVisibilty;

@end
