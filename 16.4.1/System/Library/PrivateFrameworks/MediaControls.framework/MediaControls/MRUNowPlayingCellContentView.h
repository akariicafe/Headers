@class MRUArtworkView, MRUNowPlayingHeaderView, MRUVisualStylingProvider;

@interface MRUNowPlayingCellContentView : UIView

@property (readonly, nonatomic) MRUArtworkView *artworkView;
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly, nonatomic) double textInset;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
